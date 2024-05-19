cmake_minimum_required(VERSION 3.5)
project(gwagon_description)

find_package(ament_cmake REQUIRED)

find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)

add_executable(PublisherNode src/PublisherNode.cpp)

ament_target_dependencies(PublisherNode rclcpp geometry_msgs)

install(
  TARGETS PublisherNode
  DESTINATION lib/${PROJECT_NAME}
)

install(
  DIRECTORY launch config meshes rviz urdf
  DESTINATION share/${PROJECT_NAME}
)

ament_export_dependencies(${THIS_PACKAGE_INCLUDE_DEPENDS})


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
