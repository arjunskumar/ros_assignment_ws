// Arjun S Kumar

#include <ros/ros.h>
#include <std_msgs/Float64.h>


void myCallback(const std_msgs::Float64& message_holder){
    // it wakes up everytime a message is published on "topic1"
    // it doesnt consume cpu time polling for new data
    ROS_INFO("Recieved value is %f",message_holder.data);

}
int main(int argc, char **argv){
    // Intialize ros node "listener_node"
    ros::init(argc, argv,"listener_node");
    ros::NodeHandle nh;
    ros::Subscriber my_subscriber_object = nh.subscribe("topic1", 1, myCallback);
    // The spin() command keeps main() alive without consuming significant CPU time
    ros::spin();
    return 0;

}