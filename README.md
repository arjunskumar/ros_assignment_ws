# ros_assignment_ws
ROS Internship tasks/assignments at Ignitarium, India

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
## Assignments (Beginner Level)
|  SLNo |  Task |   Status|   
|--- | --- | ---|
|  1 | Create a Github Account, Understand the basic git commands  | Done
| 2|  Create a ros package beginner_tutorials |  - 
|  3 |Create a listener node and talker node, talker node publishes some data, listen the data using a listener node and print the listened value to the terminal. (Publish rate is 2 seconds) | - 
| 4 | Create a launch file (beginner_tutorials.launch) with one listener node and two talker node| - 
|  5 | Create a custom msg Number.msg) with fields int64 num1, int64 num2  and Sum.msg with following fields int64 total | -
|  6 | Create a ros node and import Sum and Number msgs, publish to the topic "total" the sum of num1 and num2. Echo the rostopic | - 
|  7 | Create a custom service (Add_Two_Integers.srv) with request fields int64 a, int64 b  and response field int64 sum | -
|  8 | Create  a client node and take two numbers from command line arguments, and outputs the response from the server. Create a   server node that takes the request from the client node and  returns the response to client node. Hint use Custom service msg | -

---
## Assignments (Intermediate Level)

| SLNO | Task | Status |
|--- | --- | ---|
| 1 | | - |

---
## Standard naming conventions used in ROS

Here we are using the text `Helloworld` to demonstrate the naming patterns we are using in ROS:

**HelloWorld**: This name starts with an uppercase letter, and each new word starts with an uppercase letter with no space or underscores.

**helloWorld**: In this naming method, the first letter will be lowercase but new words will be in uppercase letters without spaces.

**hello_world**: This only contains lowercase letters. Words are separated with underscores.

**HELLO_WORLD**: All are uppercase letters. Words are separated by an underscore.

### The following are the naming conventions followed by each component in ROS:

Packages, Topics/Services, Files, Libraries: These ROS components are following the `hello_world` pattern.

Classes/Types: These classes are following the `HelloWorld` kind of naming conventions, for example, `class ExampleClass`.

Functions/Methods: Functions follow `helloWorld` naming conventions and function arguments are following the `hello_world` pattern, for example, `void exampleMethod(int sample_arg);`.

Variables: Generally, variables follow the `hello_world` pattern.

Constants: Constants follow the `HELLO_WORLD` pattern.

Member variables: The member variable inside a class follows the `hello_world pattern with a trailing underscore`, for example, int `sample_int_`.

Global variables: Global variables follow `hello_world, with a leading g_`, for example, `int g_samplevar;`.

Namespace: This follows the `hello_world` naming pattern.

