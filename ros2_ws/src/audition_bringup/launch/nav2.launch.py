# ros2 launch audition_bringup nav2.launch.py
# ros2 launch audition_bringup nav2.launch.py map:=/path/to/map.yaml

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():

    bringup_dir     = get_package_share_directory('audition_bringup')
    nav2_bringup_dir = get_package_share_directory('nav2_bringup')

    
    map_arg = DeclareLaunchArgument(
        'map',
        default_value=os.path.join(bringup_dir, 'config', 'map.yaml'),
        description='Full path to map yaml file'
    )

    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='Use simulation clock (true for Gazebo)'
    )

    params_file_arg = DeclareLaunchArgument(
        'params_file',
        default_value=os.path.join(bringup_dir, 'config', 'nav2_params.yaml'),
        description='Nav2 parameters file'
    )

   
    # Jazzy renamed bringup_launch.py to navigation_launch.py
    jazzy_launch  = os.path.join(nav2_bringup_dir, 'launch', 'navigation_launch.py')
    humble_launch = os.path.join(nav2_bringup_dir, 'launch', 'bringup_launch.py')
    nav2_launch_file = jazzy_launch if os.path.exists(jazzy_launch) else humble_launch

    nav2 = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(nav2_launch_file),
        launch_arguments={
            'map':          LaunchConfiguration('map'),
            'use_sim_time': LaunchConfiguration('use_sim_time'),
            'params_file':  LaunchConfiguration('params_file'),
        }.items()
    )

    
    rviz_config = os.path.join(nav2_bringup_dir, 'rviz', 'nav2_default_view.rviz')

    rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', rviz_config] if os.path.exists(rviz_config) else [],
    )

    return LaunchDescription([
        map_arg,
        use_sim_time_arg,
        params_file_arg,
        nav2,
        rviz,
    ])
