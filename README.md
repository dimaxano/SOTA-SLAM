# SOTA-SLAM

## TODOs (in the order of priority)
- SIFT features (a bit later with CUDA support)
- camera model independent (pinhole, fisheye and perspective at first)
- Inverse depth parametrization
- Voxel-based Map
- GTSAM as pose graph backend
- IMU fusing
- mix of direct and indirect approach
- online camera calibration
- multicameras (follow RPG in implementation)
- ROS wrapper

## Tasks

1. Simple Visual Odometry pipeline (with thoughts about future upgrade to vSLAM): feature extraction, matching, pose estimation through Essential Matrix estimation, 3D visualization (pangolin)

## Notes on some implementation details
- c++-17
- clang + its stdlib
- ninja instead make (google, at first)
- NO RAW POINTERS