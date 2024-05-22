#pragma once

#include <rclcpp/rclcpp.hpp>

class MinimalNode : public rclcpp::Node
{
public:
  MinimalNode(const std::string& name_space = "", const rclcpp::NodeOptions& options = rclcpp::NodeOptions());
};
