# Install script for directory: /home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/src/audition_data_collector

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/install/audition_data_collector")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/llvm-objdump-18")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector" TYPE PROGRAM FILES "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/src/audition_data_collector/scripts/acoustic_recorder.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/waypoint" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/waypoint")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/waypoint"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector" TYPE EXECUTABLE FILES "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/build/audition_data_collector/waypoint")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/waypoint" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/waypoint")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/waypoint"
         OLD_RPATH "/opt/ros/humble/lib:/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/install/audition_msgs/lib:/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/install/audio_common_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/llvm-strip-18" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/waypoint")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/collector" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/collector")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/collector"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector" TYPE EXECUTABLE FILES "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/build/audition_data_collector/collector")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/collector" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/collector")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/collector"
         OLD_RPATH "/opt/ros/humble/lib:/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/install/audition_msgs/lib:/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/install/audio_common_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/llvm-strip-18" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/collector")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/handler" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/handler")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/handler"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector" TYPE EXECUTABLE FILES "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/build/audition_data_collector/handler")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/handler" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/handler")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/handler"
         OLD_RPATH "/opt/ros/humble/lib:/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/install/audition_msgs/lib:/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/install/audio_common_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/llvm-strip-18" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/handler")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/recorder" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/recorder")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/recorder"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector" TYPE EXECUTABLE FILES "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/build/audition_data_collector/recorder")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/recorder" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/recorder")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/recorder"
         OLD_RPATH "/opt/ros/humble/lib:/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/install/audition_msgs/lib:/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/install/audio_common_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/llvm-strip-18" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/audition_data_collector/recorder")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/audition_data_collector" TYPE DIRECTORY FILES
    "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/src/audition_data_collector/launch"
    "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/src/audition_data_collector/config"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/build/audition_data_collector/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/audition_data_collector")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/build/audition_data_collector/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/audition_data_collector")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/audition_data_collector/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/audition_data_collector/environment" TYPE FILE FILES "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/build/audition_data_collector/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/audition_data_collector/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/audition_data_collector/environment" TYPE FILE FILES "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/build/audition_data_collector/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/audition_data_collector" TYPE FILE FILES "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/build/audition_data_collector/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/audition_data_collector" TYPE FILE FILES "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/build/audition_data_collector/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/audition_data_collector" TYPE FILE FILES "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/build/audition_data_collector/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/audition_data_collector" TYPE FILE FILES "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/build/audition_data_collector/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/audition_data_collector" TYPE FILE FILES "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/build/audition_data_collector/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/build/audition_data_collector/ament_cmake_index/share/ament_index/resource_index/packages/audition_data_collector")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/audition_data_collector/cmake" TYPE FILE FILES
    "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/build/audition_data_collector/ament_cmake_core/audition_data_collectorConfig.cmake"
    "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/build/audition_data_collector/ament_cmake_core/audition_data_collectorConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/audition_data_collector" TYPE FILE FILES "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/src/audition_data_collector/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/moses/Moses/Robotics/ROS-Projects/audition-data-collection/ros2-robot-audition-suite/ros2_ws/build/audition_data_collector/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
