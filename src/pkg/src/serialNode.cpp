#include <chrono>
#include <memory>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include <cerrno>

//Linux libraries for serial (POSIX)
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>

#include "rclcpp/rclcpp.hpp"
#include "pkg/msg/loadcell_data.hpp"    //custom message

using namespace std::chrono_literals;

class SerialNode : public rclcpp::Node {
public:
    SerialNode() : Node("serial_node"), serial_fd(-1) {
        publisher = this->create_publisher<pkg::msg::LoadcellData>("/loadcells", 10);

        //Opens serial port (with a baud rate of 921600)
        if (!init_serial("/dev/ttyUSB0", B115200)) {      //con i pin era /dev/ttyS0
            RCLCPP_ERROR(this->get_logger(), "Error while opening serial port!");
            throw std::runtime_error("Serial initialization failed.");
        }
		RCLCPP_INFO(this->get_logger(), "Serial port initialized.");

        RCLCPP_INFO(this->get_logger(), "Starting communication...");
        // Crea un timer per controllare la seriale ogni 100 millisecondi (10 Hz)
        //timer = this->create_wall_timer(10ms, std::bind(&SerialNode::read_serial_callback, this));  //100
        read_thread = std::thread(&SerialNode::read_serial_callback, this);
    }

    ~SerialNode() {
        //the file descriptor is valid when it is >= 0
        if (serial_fd != -1) {
            close(serial_fd);
        }

        //wait for the secondary thread to finish before destroying the object
        if (read_thread.joinable()) {
            read_thread.join();
        }
    }

private:
    int serial_fd;
    std::string buffer_line;
    rclcpp::Publisher<pkg::msg::LoadcellData>::SharedPtr publisher;
    //rclcpp::TimerBase::SharedPtr timer;
    std::thread read_thread;
    
    bool init_serial(const std::string& port, speed_t baudrate) {
        serial_fd = open(port.c_str(), O_RDWR | O_NOCTTY);   //open is a C function: port has to be converted to a C string
		RCLCPP_INFO(this->get_logger(), "Serial fd: %d\n", serial_fd);
        
        if (serial_fd == -1){
            RCLCPP_ERROR(this->get_logger(), "open() has failed on port: %s. Error: %s (%d)\n", 
                     port.c_str(), strerror(errno), errno);
            
            return false;
        }

        struct termios toptions;
        if (tcgetattr(serial_fd, &toptions) < 0) return false;

        //Set baudrate
        cfsetispeed(&toptions, baudrate);
        cfsetospeed(&toptions, baudrate);

        //8N1 configuration (8 data bits, no parity bit, 1 stop bit)
        toptions.c_cflag &= ~PARENB;    //no parity bit
        toptions.c_cflag &= ~CSTOPB;    //1 bit stop
        toptions.c_cflag &= ~CSIZE;     //reset character size
        toptions.c_cflag |= CS8;        //set dimension of 1 byte
        
        //Disable hardware flow control
        toptions.c_cflag &= ~CRTSCTS;
        
        //Enable receiver and local line
        toptions.c_cflag |= CREAD | CLOCAL;
        toptions.c_iflag &= ~(IXON | IXOFF | IXANY); //disable software flow control
        
        //Set raw mode
        toptions.c_lflag &= ~(ICANON | ECHO | ECHOE);    //ISIG
        toptions.c_oflag &= ~OPOST;

        //TCSANOW is to apply the changes now
        if (tcsetattr(serial_fd, TCSANOW, &toptions) < 0) return false;
        return true;
    }

    void read_serial_callback() {
        while(rclcpp::ok()) {    //works only until Ctrl+C
            //RCLCPP_INFO(this->get_logger(), "Starting readings...");
            char buf[1];    //reads one character at a time, to be sure not to miss anything
            int n = read(serial_fd, buf, 1);

            if (n > 0) {
                if (buf[0] == '\n') {
                    //We have reached the end of the line, so we can process the csv data
                    process_csv_line(buffer_line);
                    buffer_line.clear();
                } else if (buf[0] != '\r') {    //lines terminates with CRLF: \r\n
                    buffer_line += buf[0];
                }
            } else if (n < 0) {
                RCLCPP_ERROR(this->get_logger(), "Error: %s\n", strerror(errno));
            } else if (n == 0) {
                RCLCPP_WARN(this->get_logger(), "EOF Reached.");
            }
        }
    }

    void process_csv_line(const std::string& line) {
		//RCLCPP_INFO(this->get_logger(), "Starting parsing...");
        if (line.empty())
            return;

        //ESP32 sends the line in this format: "LO_reading, LI_reading, RI_reading, RO_reading"
        //We have to separate the values to make up the LoadcellData message
        auto msg = pkg::msg::LoadcellData();
        msg.header.stamp = this->get_clock()->now();
        msg.header.frame_id = "walker_handles";

        //Using stringstream for parsing
        std::stringstream ss(line);
        std::string token;
        std::vector<float> values;

        while(std::getline(ss, token, ',')){
            values.push_back(std::stof(token));
        }
		//RCLCPP_INFO(this->get_logger(), "Message parsed.");
        //Check to see if we received all the values for the four cells
        if (values.size() == 2) {   //TO DO: quando ci saranno tutte le celle, sostituisci 2 con 4
            msg.left_outer = values[0];
            msg.left_inner = values[1];
            msg.right_inner = values[2];
            msg.right_outer = values[3];

            publisher->publish(msg);

            RCLCPP_INFO(this->get_logger(), "Data:\n  Left outer = %f,\n  Left inner = %f,\n  Right inner = %f,\n  Right outer = %f", 
                        values[0], values[1], values[2], values[3]);
        } else {
            RCLCPP_WARN(this->get_logger(), "Received CSV line was corrupted: %s", line.c_str());
        }
    }
};

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SerialNode>());
    rclcpp::shutdown();
    return 0;
}
