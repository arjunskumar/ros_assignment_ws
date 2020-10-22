// Arjun S Kumar

#ifndef TURTLESIM_SQUARE_H_
#define TURTLESIM_SQUARE_H_

#include <stdlib.h>
#include <string>
#include <math.h> 

#include <ros/ros.h> 
#include <geometry_msgs/Twist.h> 

// define a class TurtleSimController
class TurtleSimController
{
public:

    TurtleSimController(ros::NodeHandle* nodehandle); 
    void turtlesim_square(); 
    double radians(double degree);

private:

    ros::NodeHandle nh_; 
    ros::Publisher  cmd_publisher_;

    void initializePublishers();
    
}; // end of class

#endif  
