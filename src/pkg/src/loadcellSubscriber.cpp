#include "rclcpp/rclcpp.hpp"
#include "pkg/msg/loadcell_data.hpp"

using std::placeholders::_1;    //Placeholder for callback function

class LoadcellSubscriber : public rclcpp::Node{
    public:
    LoadcellSubscriber() : Node("loadcell_subscriber"){
        subscriber = create_subscription<pkg::msg::LoadcellData>
        (
            "/loadcells", 
            10,
            //now we need a callback function that will execute every time a msg is published in the topic
            //_1 tells the function to use the first parameter that is passed
            std::bind(&LoadcellSubscriber::topicCallback, this, _1)
        );
    }

    void topicCallback(const pkg::msg::LoadcellData &msg) const {
        RCLCPP_INFO(get_logger(), 
            "Receiving data:\n  Left outer = %.3f,\n  Left inner = %.3f,\n  Right inner = %.3f,\n  Right outer = %.3f", 
            msg.left_outer, msg.left_inner, msg.right_inner, msg.right_outer);
        
        int left_load = msg.left_outer + msg.left_inner;
        int right_load = msg.right_inner + msg.right_outer;
        int total_load = left_load + right_load;

        if(total_load < 10 && total_load > -10){
            RCLCPP_INFO(get_logger(), "User is absent");
            //smart walker is not active: TO DO
            //if the user was present and is no longer detected, wait 5s before shutting down the walker
        }
        else {
            //smart walker is active: TO DO
            if(left_load < -5 && right_load > 5)   
                RCLCPP_INFO(get_logger(), "User is present: turning left");
            else if(right_load < -5 && left_load > 5)
                RCLCPP_INFO(get_logger(), "User is present: turning right");
            else if(total_load < -10 && left_load < -5 && right_load < -5)
                RCLCPP_INFO(get_logger(), "User is present: slowing down");
            else if(total_load > 10 && left_load > 5 && right_load > 5)
                RCLCPP_INFO(get_logger(), "User is present: moving forward");
            
        }
        
    }

    private:
    rclcpp::Subscription<pkg::msg::LoadcellData>::SharedPtr subscriber;
};

int main(int argc, char* argv[]){
    rclcpp::init(argc, argv);
    auto subscriber_node = std::make_shared<LoadcellSubscriber>();
    rclcpp::spin(subscriber_node);
    rclcpp::shutdown();

    return 0;
}