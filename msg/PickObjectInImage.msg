# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Pickup an object that is at a pixel location in an image.
bosdyn_msgs/Vec2 pixel_xy
bool pixel_xy_is_set

# A tree-based collection of transformations, which will include the transformations to each image's
# sensor in addition to transformations to the common frames ("vision", "body", "odom").
# All transforms within the snapshot are at the acquistion time of the image.
bosdyn_msgs/FrameTreeSnapshot transforms_snapshot_for_camera
bool transforms_snapshot_for_camera_is_set

# The frame name for the image's sensor source. This must be included in the transform snapshot.
string frame_name_image_sensor

# Camera model.
bosdyn_msgs/ImageSourcePinholeModel camera_model
bool camera_model_is_set

# Optional parameters for the grasp.
bosdyn_msgs/GraspParams grasp_params
bool grasp_params_is_set

# Automatic walking / gazing configuration.
# See detailed comment in the PickObjectRayInWorld message.
bosdyn_msgs/WalkGazeMode walk_gaze_mode

