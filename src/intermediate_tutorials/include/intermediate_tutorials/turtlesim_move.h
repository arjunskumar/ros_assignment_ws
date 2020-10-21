

#ifndef TURTLESIM_MOVE_H_
#define TURTLESIM_MOVE_H_

#include <stdlib.h>
#include <string>

#include <ros/ros.h> 
#include <geometry_msgs/Twist.h> 
#include "turtlesim/Pose.h"

// define a class TurtleSimController
class TurtleSimController
{
public:

    TurtleSimController(ros::NodeHandle* nodehandle); 
    void turtlesim_square(); 

private:

    ros::NodeHandle nh_; 
    ros::Publisher  cmd_publisher_;
    ros::Subscriber cmd_turn_;

    void initializePublishers();
    
}; // end of class

#endif  
