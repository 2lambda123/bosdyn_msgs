# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Unknown/unexpected error.
int8 IMPAIRED_STATUS_UNKNOWN=0
# The robot is able to drive.
int8 IMPAIRED_STATUS_OK=1
# The autonomous system does not have any data from the robot state service.
int8 IMPAIRED_STATUS_NO_ROBOT_DATA=2
# There is a system fault which caused the robot to stop. See system_fault for details.
int8 IMPAIRED_STATUS_SYSTEM_FAULT=3
# The robot's motors are not powered on.
int8 IMPAIRED_STATUS_NO_MOTOR_POWER=4
# The autonomous system is expected to have a remote point cloud (e.g. a LIDAR), but this is not working.
int8 IMPAIRED_STATUS_REMOTE_CLOUDS_NOT_WORKING=5
# A remote service the autonomous system depends on is not working.
int8 IMPAIRED_STATUS_SERVICE_FAULT=6
# A behavior fault caused the robot to stop. See behavior_faults for details.
int8 IMPAIRED_STATUS_BEHAVIOR_FAULT=7
# The autonomous system expected to have a payload providing an entity detector.
# The detector is either not present, or not working. Note that if the detector
# exists but is throwing a system fault, the status will be IMPAIRED_STATUS_SYSTEM_FAULT.
int8 IMPAIRED_STATUS_ENTITY_DETECTOR_NOT_WORKING=8

int8 value
