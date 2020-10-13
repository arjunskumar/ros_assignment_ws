# ros_assignment_ws
ROS Internship tasks/assignments at Ignitarium, India

## Instructions for how to use this repo

**Step1** 

clone the git repo and create the workspace

```
git clone https://github.com/arjunskumar/ros_assignment_ws
cd ros_assignment_ws
mdkir src
catkin_make
```

**Step2**

Create a branch "develop" and push your changes to develop branch only
```
git checkout -b develop
```

## Assignments (Beginner Level)
|  SLNo |  Lesson |   Status|   
|--- | --- | ---|
|  1 | Create a Github Account, Understand the basic git commands  | Yes
| 2|  Create a ros package beginner_tutorials |  - 
|  3 |Create a listener node and talker node, talker node publishes some data, listen the data using a listener node and print the listened value to the terminal. (Publish rate is 2 seconds) | - 
| 4 | Create a launch file (beginner_tutorials.launch) with one listener node and two talker node| - 
|  5 | Create a custom msg Number.msg) with fields int64 num1, int64 num2  and Sum.msg with following fields int64 total | -
|  6 | Create a ros node and import Sum and Number msgs, publish to the topic "total" the sum of num1 and num2. Echo the rostopic | - 
|  7 | Create a custom service (Add_Two_Integers.srv) with request fields int64 a, int64 b  and response field int64 sum | -
|  8 | Create  a client node and take two numbers from command line arguments, and outputs the response from the server. Create a   server node that takes the request from the client node and  returns the response to client node. Hint use Custom service msg | -
