from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():

    bringup_dir = get_package_share_directory('audition_bringup')

    
    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='Use simulation clock (true for Gazebo)'
    )

    map_arg = DeclareLaunchArgument(
        'map',
        default_value=os.path.join(bringup_dir, 'config', 'map.yaml'),
        description='Full path to map yaml file'
    )

   
    nav2 = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(bringup_dir, 'launch', 'nav2.launch.py')
        ),
        launch_arguments={
            'use_sim_time': LaunchConfiguration('use_sim_time'),
            'map':          LaunchConfiguration('map'),
        }.items()
    )

   
    audio_capture_dir = get_package_share_directory('audio_capture')
    audio_launch = os.path.join(audio_capture_dir, 'launch', 'capture.launch.py')

    audio = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(audio_launch),
    )

   
    collection = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(bringup_dir, 'launch', 'collection_session.launch.py')
        ),
    )

    return LaunchDescription([
        use_sim_time_arg,
        map_arg,
        nav2,
        audio,
        collection,
    ])
