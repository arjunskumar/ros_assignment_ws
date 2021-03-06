# ros_assignment_ws
2 weeks ROS course conducted at Ignitarium, India

[<img src="res/ros_logo.png" width="250"/>](res/ros_logo.png)  

**Step1** 

clone the git repo and create the workspace

```
git clone https://github.com/arjunskumar/ros_assignment_ws
cd ros_assignment_ws
mdkir src
catkin_make
```

**Step2**

Create a branch `develop` and push your changes to ***develop*** branch only
```
git checkout -b develop
```
---
## ROS1 Assignments (Beginner Level)
|  SLNo |  Task |   Status|   
|--- | --- | ---|
|  1 | Create a [Github Account](https://github.com/), Understand the basic git commands  | Done
| 2|  Create a ros package `beginner_tutorials` |  Done 
|  3 |Create a `listener node` and `talker node`, talker node publishes some data, listen the data using a listener node and print the listened value to the terminal. (Publish rate is `2 seconds`) | Done 
| 4 | Create a launch file `beginner_tutorials.launch` with `one listener node` and `two talker node`. Hint use namespace| Done 
|  5 | Create a [custom msg](http://wiki.ros.org/ROS/Tutorials/DefiningCustomMessages) `Number.msg` with fields int64 num1, int64 num2  and `Sum.msg` with following fields int64 total | Done
|  6 | Create a `calculate_sum_node` ros node and import Sum and Number msgs, publish to the topic `total` the sum of num1 and num2. Echo the [rostopic](http://wiki.ros.org/rostopic) | Done 
|  7 | Create a [custom service](http://wiki.ros.org/ROS/Tutorials/CreatingMsgAndSrv) `Add_Two_Integers.srv` with request fields int64 a, int64 b  and response field int64 sum | Done
|  8 | Create  a `client node` and take two numbers as command line arguments, and outputs the response from the server. Create a `server node` that takes the request from the client node and  returns the response to client node. Hint use Custom service msg | Done

---
## ROS1 Assignments (Intermediate Level)

| SLNO | Task | Status |
|--- | --- | ---|
| 1 |  Understand [rosbag](http://wiki.ros.org/rosbag) Commands, Play the rosbag present in package `intermediate_tutorials` | Done |
| 2 | List out all the topics available in the bag file, get the hz, info and type of [rostopics](http://wiki.ros.org/rostopic)| Done |
| 3 | Plot the turtle pose using [rqt_plot](http://wiki.ros.org/rqt_plot) and save the figure as `plot_turtlesim_pose/png` to `intermediate_tutorials/img/` folder | Done |
| 4 | Understand the [turtlesim](http://wiki.ros.org/turtlesim) package | Done |
| 5 | Launch the `move_turtlesim.launch` and do code walk through, play with the code and change rate to 20Hz without editing the node `turtlesim_move`. </br> Hint use [rosparam](http://wiki.ros.org/rosparam) | Done |
|6| Use the node `turtlesim_move` as reference, move the turtle in a square and set the number of square loop as a parameter. Name the node `turtlesim_square`| Done | 
| 7 | Why [ROS2.0](https://index.ros.org/doc/ros2/)? ROS1 vs ROS2| Done |

---

## ROS2 Assignments (Beginner Level)


| SLNO | Task | Status |
|--- | --- | ---|
| 1 |  Install [ROS2 Dashing](ROS2_Installation.md) | Done |
| 2 | Create a ROS2 Workspace | Done |
| 3 | Understand ROS2 Commandline commands | Done |
| 4 | Understand ROS2 Topics, ROS2 service, ROS2 parameters | Done |
| 5 | Create a ROS2 C++ Package | Done |
| 6 | Create a ROS2 Python Package | Done |
| 7 | Create a ROS2 launch file  | Done |
| 8 | Create a ROS2 custom message | Done |
| 9| Create a ROS2 C++ Package | Done |
| 10 | Communicate between ROS1 and ROS2 | Done |
| 11 | Create a simple ROS2 C++ publisher & Subscriber | Done |
| 12 | Create a simple ROS2 Python publisher & Subscriber | Done |
| 13 | Create a simple ROS2 C++ Service & Client | Done |
| 14 | Create a simple ROS2 Python Service & Client | Done |
| 15 | Understand ROS2bag, Rqt tools | Done |

---

### Appendix
[ROS1 Naming Convention](Naming_ROS1.md)
[ROS1 Best Practices](https://github.com/leggedrobotics/ros_best_practices)
