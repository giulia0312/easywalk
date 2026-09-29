#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "pkg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pkg__msg__LoadcellData() -> *const std::ffi::c_void;
}

#[link(name = "pkg__rosidl_generator_c")]
extern "C" {
    fn pkg__msg__LoadcellData__init(msg: *mut LoadcellData) -> bool;
    fn pkg__msg__LoadcellData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LoadcellData>, size: usize) -> bool;
    fn pkg__msg__LoadcellData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LoadcellData>);
    fn pkg__msg__LoadcellData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LoadcellData>, out_seq: *mut rosidl_runtime_rs::Sequence<LoadcellData>) -> bool;
}

// Corresponds to pkg__msg__LoadcellData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadcellData {
    /// contains timestamp and frame_id
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_outer: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_inner: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_inner: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_outer: f64,

}



impl Default for LoadcellData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pkg__msg__LoadcellData__init(&mut msg as *mut _) {
        panic!("Call to pkg__msg__LoadcellData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LoadcellData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pkg__msg__LoadcellData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pkg__msg__LoadcellData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pkg__msg__LoadcellData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LoadcellData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LoadcellData where Self: Sized {
  const TYPE_NAME: &'static str = "pkg/msg/LoadcellData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pkg__msg__LoadcellData() }
  }
}


