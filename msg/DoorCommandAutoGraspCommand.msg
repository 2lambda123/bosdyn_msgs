# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# The name of the frame that the following fields are expressed in.
string frame_name

# The start of the ray the robot searches along for the door handle.
geometry_msgs/Vector3 search_ray_start_in_frame
bool search_ray_start_in_frame_is_set

# The end of the ray the robot searches along for the door handle.
geometry_msgs/Vector3 search_ray_end_in_frame
bool search_ray_end_in_frame_is_set

# The side of the hinge with respect to the robot when facing the door.
bosdyn_msgs/DoorCommandHingeSide hinge_side

# The direction the door moves with respect to the robot.
bosdyn_msgs/DoorCommandSwingDirection swing_direction
