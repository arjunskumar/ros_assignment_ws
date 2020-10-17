// Arjun S Kumar
#include "intermediate_tutorials/turtlesim_move.h"

TurtleSimController::TurtleSimController(ros::NodeHandle* nodehandle):nh_(*nodehandle)
{   
    ROS_INFO("Initializing Constructors");
    initializePublishers(); 
  
}

void TurtleSimController::initializePublishers()
{
    ROS_INFO("Initializing Publishers");
    cmd_publisher_ = nh_.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 1, true); 
}


void TurtleSimController::turtlesim_move(){
        geometry_msgs::Twist move_cmd;
        // Linear speed in x in units/second: positive values imply forward,
        // negative values == backwards
        move_cmd.linear.x = 0.3; // Modify this value to change the Turtle's speed
        // Turn at 0 radians/s
        move_cmd.angular.z = 0.0;
        cmd_publisher_.publish(move_cmd);
}

int main(int argc, char** argv) 
{
   
    ros::init(argc, argv, "TurtleSimController"); //node name
    ros::NodeHandle nh;
    TurtleSimController turtlesimController(&nh);  
    
    ros::NodeHandle private_nh("~");
    int rate;  

    private_nh.param<int>("rate", rate, 10);
    
    ros::Rate r(rate);

    while(ros::ok()){
        turtlesimController.turtlesim_move();
        ros::spinOnce();
        r.sleep();
    }
    
    return 0;
} 
