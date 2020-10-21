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
    cmd_turn_ =nh_.subscribe<turtlesim::Pose>("/turtle1/pose",100,TurtleSimController::turtlesim_square());//subscribing to /turtle1/pose to access location of turtle 
}


void TurtleSimController::turtlesim_square(){
        geometry_msgs::Twist move_cmd;
	turtlesim::Pose turn_cmd;
	int d=0,D=100;
	//turtlesim::pose turn_cmd;
        // Linear speed in x in units/second: positive values imply forward,
        // negative values == backwards
	while(turn_cmd.x==10){
	move_cmd.linear.x = 0.3;
  	}
	
        move_cmd.angular.z = 0.75;
	
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
        turtlesimController.turtlesim_square();
        ros::spinOnce();
        r.sleep();
    }
    
    return 0;
} 
