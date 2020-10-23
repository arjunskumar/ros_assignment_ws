## ROS2 Installation


### Setup Locale

```
sudo locale-gen en_US en_US.UTF-8

sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8

export LANG=en_US.UTF-8

```
### Setup Sources

```
sudo apt update && sudo apt install curl gnupg2 lsb-release

curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -

sudo sh -c 'echo "deb [arch=$(dpkg --print-architecture)] http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" > /etc/apt/sources.list.d/ros2-latest.list'

```

### Install ROS2 Packages

```
sudo apt update

sudo apt install ros-dashing-desktop

source /opt/ros/dashing/setup.bash

sudo apt install python3-colcon-common-extensions
```

### Test the installation

```
ros2 run demo_nodes_cpp talker

ros2 run demo_nodes_py listener
```
###  Setup ROS2 workspace

```
mkdir ros2_ws/src
cd src
```

There are two build tools Cmake and Python in ROS2

```
ros2 pkg create --build-type ament_cmake --node-name mynode my_package
ros2 pkg create --build-type ament_python --node-name mynode my_package_py
```

The above commands is used for creating the packages .

To build the workspace: `colcon build`

To source the workspace use: `source install/setup.bash`

To run the package: `ros2 run my_package mynode`


[Reference](https://index.ros.org/doc/ros2/Installation/Dashing/Linux-Install-Debians/)