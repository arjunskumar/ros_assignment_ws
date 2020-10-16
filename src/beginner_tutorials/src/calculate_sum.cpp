// Arjun S Kumar
#include <ros/ros.h>
#include <std_msgs/Float64.h>   
#include "beginner_tutorials/Number.h"
#include "beginner_tutorials/Sum.h"

// random 
#include <stdlib.h>

beginner_tutorials::Number g_numbers;
beginner_tutorials::Sum g_total;

int main(int argc, char **argv){

    ros::init(argc, argv,"calculate_sum_node");
    ros::NodeHandle nh;

    ros::Publisher my_publisher_object = nh.advertise<beginner_tutorials::Sum>("total",1);

    ros::Rate rate(0.5);
    
    while(ros::ok()){

        g_numbers.num1 = rand() % 100;
        g_numbers.num2 = rand() % 100;
    
        g_total.total = g_numbers.num1 + g_numbers.num2;

        my_publisher_object.publish(g_total);

        ROS_INFO("Sum of %d + %d is = %d", g_numbers.num1, g_numbers.num2, g_total.total);
        ros::spinOnce();
        rate.sleep();

    }
    return 0;
}