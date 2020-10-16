// Arjun S Kumar

#include <ros/ros.h>
#include <std_msgs/Float64.h>

int main(int argc, char **argv){

    // Intialize ros node "talker_node"
    ros::init(argc, argv,"talker_node"); 
    ros::NodeHandle nh;
    // create a publisher with topic "topic1" and buffer size of 1
    ros::Publisher my_publisher_object = nh.advertise<std_msgs::Float64>("topic1",1);

    // create a ros object from the ros Rate class
    // sleeper timer for 0.5 hz repetition rate
    ros::Rate rate(0.5);
    //create a variable of type Float64
    std_msgs::Float64 input_float;
    input_float.data = 0.0;

    while(ros::ok()){
        input_float.data = input_float.data + 0.001;
        my_publisher_object.publish(input_float);
        rate.sleep();
        }
    
    }