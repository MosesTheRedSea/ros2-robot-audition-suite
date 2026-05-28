import os
import subprocess
from launch import LaunchDescription
from launch.actions import ExecuteProcess, TimerAction, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():

    sim_pkg  = get_package_share_directory('audition_sim')
    nav2_pkg = get_package_share_directory('nav2_bringup')

    urdf_file = os.path.join(sim_pkg, 'urdf', 'robot.urdf.xacro')
    world_file = os.path.join(sim_pkg, 'worlds', 'room.world')
    nav2_params = os.path.join(sim_pkg, 'config', 'nav2_params.yaml')
    waypoints_config = os.path.join(sim_pkg, 'config', 'sim_waypoints.yaml')
    acoustic_params = os.path.join(sim_pkg, "config", "acoustic_params.yaml")

    robot_description = subprocess.check_output(
        ['xacro', urdf_file]).decode('utf-8')

    return LaunchDescription([

        ExecuteProcess(
            cmd=['gazebo', '--verbose', world_file,
                 '-s', 'libgazebo_ros_init.so',
                 '-s', 'libgazebo_ros_factory.so'],
            output='screen'
        ),

        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            parameters=[{
                'use_sim_time': True,
                'robot_description': robot_description
            }],
            output='screen'
        ),
 
        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=[
                '-entity', 'audition_robot',
                '-topic', 'robot_description',
                '-x', '0.0', '-y', '0.0', '-z', '0.1'
            ],
            output='screen'
        ),

        
        TimerAction(period=5.0, actions=[
            Node(
                package='slam_toolbox',
                executable='async_slam_toolbox_node',
                parameters=[{
                    'use_sim_time': True,
                    'odom_frame': 'odom',
                    'map_frame': 'map',
                    'base_frame': 'base_footprint',
                    'scan_topic': '/scan',
                    'mode': 'mapping',
                }],
                output='screen'
            ),
        ]),

        
        TimerAction(period=8.0, actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    os.path.join(nav2_pkg, 'launch', 'navigation_launch.py')),
                launch_arguments={
                    'use_sim_time': 'true',
                    'params_file': nav2_params
                }.items()
            ),
        ]),

        TimerAction(period=15.0, actions=[
            Node(
                package='audition_data_collector',
                executable='waypoint',
                parameters=[waypoints_config, {'use_sim_time': True}],
                output='screen'
            ),

            Node(
                package='audition_data_collector',
                executable='collector',
                parameters=[{'use_sim_time': True}],
                output='screen'
            ),
            Node(
                package='audition_data_collector',
                executable='handler',
                parameters=[{'use_sim_time': True}],
                output='screen'
            ),

            Node(
                package='audition_data_collector',
                executable='recorder',
                parameters=[{'output_dir': '/home/moses/audition_bags', 'use_sim_time': True}],
                output='screen'
            ),

            #Node(
            #    package='audition_data_collector',
            #    executable='acoustic_recorder.py',
            #    parameters=[acoustic_params],
            #    output='screen'
            #),
        ]),

    
        TimerAction(period=8.0, actions=[
            Node(
                package='rviz2',
                executable='rviz2',
                output='screen'
            ),
        ]),
    ])
