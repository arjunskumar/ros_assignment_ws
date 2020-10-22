// Arjun S Kumar
#include "intermediate_tutorials/turtlesim_square.h"



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


void TurtleSimController::turtlesim_square(){

    ros::Rate r(5);
    geometry_msgs::Twist move_cmd;        
    move_cmd.linear.x = 1.0; 
    move_cmd.angular.z = 0.0;

    geometry_msgs::Twist turn_cmd;
    turn_cmd.linear.x = 0.0;
    turn_cmd.angular.z = radians(45);

    //  Go forward for 2 seconds (10 x 5 HZ) then turn for 2 second
    
    for(int i=0; i < 10; i++){
        // go forward 2.0 m (2 seconds * 1.0 m / seconds), where 2.0 is the side of a square
        cmd_publisher_.publish(move_cmd);
        r.sleep();
    }

    for(int i = 0; i < 10; i++){
        cmd_publisher_.publish(turn_cmd);
        r.sleep();
    }
    
}

double TurtleSimController::radians(double degree){
    double pi = 3.14159265359;
    return (degree * (pi / 180));
}

int main(int argc, char** argv) 
{
   
    ros::init(argc, argv, "TurtleSimController"); //node name
    ros::NodeHandle nh;
    TurtleSimController turtlesimController(&nh);  
    
    ros::NodeHandle private_nh("~");
    int rate;  
    int square_loop;
    
    private_nh.param<int>("rate", rate, 10);
    private_nh.param<int>("square_loop", square_loop, 1);
    ros::Rate r(rate);
    int square_count= 0;
    int side_count = 0;
    while(ros::ok()){
        while(square_count < square_loop )
            {
                turtlesimController.turtlesim_square();
                side_count++;
                if(side_count == 4){
                    square_count++;
                    side_count = 0;
                }
            }
    ros::spinOnce();
    r.sleep();
    }
    
    return 0;
} 
