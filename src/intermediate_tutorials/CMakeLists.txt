cmake_minimum_required(VERSION 3.0.2)
project(intermediate_tutorials)

# add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)

include_directories(include  ${catkin_INCLUDE_DIRS})

# add_message_files(FILES Number.msg Sum.msg)
# generate_messages(DEPENDENCIES std_msgs )

catkin_package()

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(turtlesim_move src/turtlesim_move.cpp)
target_link_libraries(turtlesim_move ${catkin_LIBRARIES})
