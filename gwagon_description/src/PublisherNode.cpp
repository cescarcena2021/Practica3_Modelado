#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

bool exit_flag = false;

class PublisherNode : public rclcpp::Node
{
public:
    PublisherNode() : Node("twist_publisher")
    {
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>(
            "/rover_base_control/cmd_vel_unstamped", 10);

        timer_ = this->create_wall_timer(std::chrono::milliseconds(30), std::bind(&PublisherNode::pub_vel, this));

        start = this->now().seconds();
    }

private:
    void pub_vel()
    {
        if(exit_flag)
        {
            RCLCPP_INFO(this->get_logger(), "Exiting pub_vel...");
            rclcpp::shutdown();
            return; 
        }

        auto msg = std::make_shared<geometry_msgs::msg::Twist>();

        double current = this->now().seconds() - start;

        
        if (current <= 5)
        {
            msg->linear.x = current; 
        }
        else if (current <= 10.0)
        {
            msg->linear.x = 5.0; 
        }
        else if (current <= 15.0)
        {
            double speed = 5.0 - (current - 10.0);
            msg->linear.x = std::max(0.0, speed);  
        }
        else
        {
            exit_flag = true; 
        }

        msg->linear.y = 0.0;
        msg->linear.z = 0.0;
        msg->angular.x = 0.0;
        msg->angular.y = 0.0;
        msg->angular.z = 0.2;
        publisher_->publish(*msg);
        RCLCPP_INFO(this->get_logger(), "Publishing Twist: Linear: [%f, %f, %f], Angular: [%f, %f, %f]",
                    msg->linear.x, msg->linear.y, msg->linear.z,
                    msg->angular.x, msg->angular.y, msg->angular.z);
    }

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    double start;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PublisherNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
