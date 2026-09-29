#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to pkg__msg__LoadcellData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadcellData {
    /// contains timestamp and frame_id
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LoadcellData::default())
  }
}

impl rosidl_runtime_rs::Message for LoadcellData {
  type RmwMsg = super::msg::rmw::LoadcellData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        left_outer: msg.left_outer,
        left_inner: msg.left_inner,
        right_inner: msg.right_inner,
        right_outer: msg.right_outer,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      left_outer: msg.left_outer,
      left_inner: msg.left_inner,
      right_inner: msg.right_inner,
      right_outer: msg.right_outer,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      left_outer: msg.left_outer,
      left_inner: msg.left_inner,
      right_inner: msg.right_inner,
      right_outer: msg.right_outer,
    }
  }
}


