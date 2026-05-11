
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([

        Node(
            package='audition_hardware',
            executable='cmd_vel_relay',
            name='cmd_vel_relay',
            output='screen',
        ),

        Node(
            package='audition_hardware',
            executable='motor_test',
            name='motor_test',
            output='screen',
            parameters=[{
                'linear_speed':  0.2,   # m/s — increase if robot moves too slowly
                'angular_speed': 0.5,   # rad/s — increase if turns are too slow
            }]
        ),

    ])
