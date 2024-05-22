#include "minimal_node.hpp"

MinimalNode::MinimalNode(const std::string& name_space, const rclcpp::NodeOptions& options)
  : Node("say_hello_node", name_space, options)
{
  RCLCPP_INFO(this->get_logger(), "Hello, world!");
}
