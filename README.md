# ROS2 Robot Audition Suite
![ROS2 Foxy](https://img.shields.io/badge/ROS2-Foxy-blue)![Python](https://img.shields.io/badge/Python-3.10+-blue)![C++](https://img.shields.io/badge/C%2B%2B-17+-blue)![Research](https://img.shields.io/badge/Type-Research-orange)
> Developed at the **Institute of Science Tokyo**, Japan

![rover-room](https://github.com/MosesTheRedSea/ros2-robot-audition-suite/blob/rover-simulation/IMG_7073.jpg)
![rover](https://github.com/MosesTheRedSea/ros2-robot-audition-suite/blob/rover-simulation/IMG_6273.jpeg)


## Overview

A ROS2 Humble-based framework for automated acoustic and depth data collection in indoor environments. A mobile robot autonomously navigates to predefined locations within a room, positions itself near occlusions, records synchronized acoustic and geometric observations, and waits for operator confirmation before advancing to the next waypoint.

The system is designed for experiments in:
- Embodied audition
- Spatial audio understanding
- Robot perception
- Acoustic scene analysis
- Multimodal robotics datasets


## Motivation

Spatial audio understanding and embodied audition require large-scale paired acoustic and geometric datasets that are prohibitively expensive to collect manually. This project automates the collection of:

- Room impulse responses (RIR)
- Depth observations
- Spatial viewpoints
- Occlusion-aware acoustic measurements

using a mobile robot operating in ROS2.


## Simulation

Gazebo-based simulation demonstrating autonomous navigation and acoustic data collection across a virtual indoor scene.

<!-- Replace with simulation GIF or video embed -->
> 🎥 Simulation demo coming soon


## Real World

Deployment on physical hardware in an indoor lab environment. The robot navigates to predefined room positions, records synchronized audio and depth, and awaits operator confirmation before continuing.

<!-- Replace with real-world GIF or video embed -->
> 🎥 Real robot demo coming soon


## System Architecture

The suite is structured as composable ROS2 nodes communicating over topics and services:

| Layer | Node | Stack |
|---|---|---|
| 01 | Navigation  | nav2 · waypoint follower |
| 02 | Acoustic Capture  | PyAudio · RIR recording |
| 03 | Depth Sensor  | RealSense D435 · point cloud |
| 04 | Operator Interface | CLI · confirmation gate |
| 05 | Dataset Writer | HDF5 · structured output |


## Quickstart

```bash
# Clone and build
git clone https://github.com/MosesTheRedSea/ros2-robot-audition-suite
cd ros2-robot-audition-suite/ros2_wos
colcon build --symlink-install

# Source and launch sim
source install/setup.bash
ros2 launch audition_sim sim.launch.py
```
