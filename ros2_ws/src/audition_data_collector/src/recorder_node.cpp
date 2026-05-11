#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/bool.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "audio_common_msgs/msg/audio_data.hpp"
#include "rosbag2_cpp/writer.hpp"
#include "rosbag2_storage/storage_options.hpp"
#include "rclcpp/serialization.hpp"
#include <memory>
#include <string>
#include <ctime>

class RecorderNode : public rclcpp::Node
{
public:
  RecorderNode() : Node("recorder_node"), recording(false)
  {
    this->declare_parameter("output_dir", "/home/moses/audition_bags");

    trigger_sub = create_subscription<std_msgs::msg::Bool>(
      "/record_trigger", 10,
      std::bind(&RecorderNode::triggerCallback, this, std::placeholders::_1));

    depth_sub = create_subscription<sensor_msgs::msg::Image>(
      "/camera/depth/image_raw", 10,
      std::bind(&RecorderNode::depthCallback, this, std::placeholders::_1));

    color_sub = create_subscription<sensor_msgs::msg::Image>(
      "/camera/color/image_raw", 10,
      std::bind(&RecorderNode::colorCallback, this, std::placeholders::_1));

    scan_sub = create_subscription<sensor_msgs::msg::LaserScan>(
      "/scan", 10,
      std::bind(&RecorderNode::scanCallback, this, std::placeholders::_1));

    pointcloud_sub = create_subscription<sensor_msgs::msg::PointCloud2>(
      "/camera/depth/points", 10,
      std::bind(&RecorderNode::pointcloudCallback, this, std::placeholders::_1));

    audio_sub = create_subscription<audio_common_msgs::msg::AudioData>(
      "/audio_capture", 10,
      std::bind(&RecorderNode::audioCallback, this, std::placeholders::_1));

    RCLCPP_INFO(get_logger(), "Recorder ready — waiting for trigger on /record_trigger");
  }

private:
  // fix: SharedPtr → ConstSharedPtr on every callback
  void triggerCallback(const std_msgs::msg::Bool::ConstSharedPtr msg)
  {
    if (msg->data && !recording) {
      startRecording();
    } else if (!msg->data && recording) {
      stopRecording();
    }
  }

  void startRecording()
  {
    std::string output_dir = this->get_parameter("output_dir").as_string();
    std::string timestamp = std::to_string(std::time(nullptr));
    std::string bag_path = output_dir + "/session_" + timestamp;

    rosbag2_storage::StorageOptions storage_options;
    storage_options.uri = bag_path;
    storage_options.storage_id = "mcap";

    writer = std::make_unique<rosbag2_cpp::Writer>();
    writer->open(storage_options);

    recording = true;
    RCLCPP_INFO(get_logger(), "Recording started — saving to %s", bag_path.c_str());
  }

  void stopRecording()
  {
    if (writer) {
      writer->close();
      writer.reset();
    }
    recording = false;
    RCLCPP_INFO(get_logger(), "Recording stopped — bag saved");
  }

  // fix: SharedPtr → ConstSharedPtr in template too
  template<typename T>
  void writeMessage(const typename T::ConstSharedPtr msg, const std::string & topic)
  {
    if (!recording || !writer) return;

    rclcpp::Serialization<T> serializer;
    rclcpp::SerializedMessage serialized_msg;
    serializer.serialize_message(msg.get(), &serialized_msg);

    auto bag_msg = std::make_shared<rosbag2_storage::SerializedBagMessage>();
    bag_msg->serialized_data = std::shared_ptr<rcutils_uint8_array_t>(
      &serialized_msg.get_rcl_serialized_message(),
      [](rcutils_uint8_array_t *) {});
    bag_msg->topic_name = topic;
    bag_msg->time_stamp = this->now().nanoseconds();

    writer->write(bag_msg);
  }

  // fix: all callbacks use ConstSharedPtr
  void depthCallback(const sensor_msgs::msg::Image::ConstSharedPtr msg)
  {
    writeMessage<sensor_msgs::msg::Image>(msg, "/camera/depth/image_raw");
  }

  void colorCallback(const sensor_msgs::msg::Image::ConstSharedPtr msg)
  {
    writeMessage<sensor_msgs::msg::Image>(msg, "/camera/color/image_raw");
  }

  void scanCallback(const sensor_msgs::msg::LaserScan::ConstSharedPtr msg)
  {
    writeMessage<sensor_msgs::msg::LaserScan>(msg, "/scan");
  }

  void pointcloudCallback(const sensor_msgs::msg::PointCloud2::ConstSharedPtr msg)
  {
    writeMessage<sensor_msgs::msg::PointCloud2>(msg, "/camera/depth/points");
  }

  void audioCallback(const audio_common_msgs::msg::AudioData::ConstSharedPtr msg)
  {
    writeMessage<audio_common_msgs::msg::AudioData>(msg, "/audio_capture");
  }

  bool recording;
  std::unique_ptr<rosbag2_cpp::Writer> writer;

  rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr trigger_sub;
  rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr depth_sub;
  rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr color_sub;
  rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr scan_sub;
  rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr pointcloud_sub;
  rclcpp::Subscription<audio_common_msgs::msg::AudioData>::SharedPtr audio_sub;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<RecorderNode>());
  rclcpp::shutdown();
  return 0;
}

// ── Sensor setup notes ────────────────────────────────────────
// 1. Install your sensor driver
//    Intel RealSense:  sudo apt install ros-humble-realsense2-camera
//    Orbbec Astra:     sudo apt install ros-humble-astra-camera
//    ReSpeaker mic:    pip install pyaudio
//
// 2. Check what topic your driver publishes on
//    ros2 topic list
//    ros2 topic echo /camera/depth/image_raw --once
//
// 3. Update the topic names above to match your driver


// 1. Install driver - sensor has ros2 driver package

/*
# Intel RealSense
sudo apt install ros-humble-realsense2-camera

# Orbbec Astra
sudo apt install ros-humble-astra-camera

# ReSpeaker mic array
pip install pyaudio
git clone https://github.com/nickoala/respeaker_ros2.git
*/

// 2. Check which topic it publishes on - once driver is running

/*
ros2 topic list
ros2 topic echo /camera/depth/image_raw --once
*/

// 3. Update the topic names in recorder_node.cpp
/*
// change this
depth_sub = create_subscription<sensor_msgs::msg::Image>(
  "/camera/depth/image_raw", 10, ...);

// to whatever your driver publishes on
depth_sub = create_subscription<sensor_msgs::msg::Image>(
  "/your_actual_topic_name", 10, ...);

*/
