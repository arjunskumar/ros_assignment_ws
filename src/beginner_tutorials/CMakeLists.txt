cmake_minimum_required(VERSION 3.0.2)
project(beginner_tutorials)

# add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  message_generation
)

include_directories(include  ${catkin_INCLUDE_DIRS})

add_message_files(FILES Number.msg Sum.msg)

add_service_files( FILES
  Add_Two_Integers.srv
)

generate_messages(DEPENDENCIES std_msgs )

catkin_package()

add_executable(my_talker src/talker.cpp) 
target_link_libraries(my_talker ${catkin_LIBRARIES})

add_executable(my_listener src/listener.cpp)
target_link_libraries(my_listener ${catkin_LIBRARIES})

add_executable(my_calculate_sum src/calculate_sum.cpp)
target_link_libraries(my_calculate_sum ${catkin_LIBRARIES})

add_executable(my_server src/server.cpp)
target_link_libraries(my_server ${catkin_LIBRARIES})

add_executable(my_client src/client.cpp)
target_link_libraries(my_client ${catkin_LIBRARIES})