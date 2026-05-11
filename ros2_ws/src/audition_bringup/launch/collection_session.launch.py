from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():

    waypoints_config = os.path.join(
        get_package_share_directory('audition_bringup'),
        'config', 'waypoints.yaml'
    )

    return LaunchDescription([
        Node(
            package='audition_data_collector',
            executable='waypoint_manager_node',
            parameters=[waypoints_config],
            output='screen'
        ),
        Node(
            package='audition_data_collector',
            executable='collection_node',
            output='screen'
        ),
        Node(
            package='audition_data_collector',
            executable='intervention_server_node',
            output='screen'
        ),
        Node(
            package='audition_data_collector',
            executable='recorder_node',
            parameters=[{'output_dir': '/home/moses/audition_bags'}],
            output='screen'
        ),
    ])
