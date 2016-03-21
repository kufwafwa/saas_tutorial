#include <ros/ros.h>
#include <std_msgs/String.h>//ros specific ros header file
void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
 ROS_INFO("I heard: [%s]", msg->data.c_str() );
}
int main(int argc, char** argv)
{
     ros::init(argc, argv, "listener");
     ros::NodeHandle nh;

     ros::Subscriber our_sub = nh.subscribe("chatter", 10, chatterCallback); // the name of the topic as an input, 10, pointer
     ros::spin();// infinite lightweight loop

     return 0;
}
