# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Params common across spot movement and mobility.

# Max allowable velocity at any point in trajectory.
bosdyn_msgs/SE2VelocityLimit vel_limit
bool vel_limit_is_set

# Parameters for controlling Spot's body during motion.
bosdyn_msgs/BodyControlParams body_control
bool body_control_is_set

# Desired gait during locomotion
bosdyn_msgs/LocomotionHint locomotion_hint

# DEPRECATED as of 3.2.0: The boolean field has been replaced by the field stairs_mode.
# The following field will be deprecated and moved to 'reserved' in a future release.

# Stairs are only supported in trot gaits. Enabling stairs mode will override some user
# defaults in order to optimize stair behavior.
# The selected option for stairs mode.
# If unset, will use the deprecated stair_hint instead.
# If falling back on stair_hint, false will map to STAIRS_MODE_OFF.
# This will be changed to STAIRS_MODE_AUTO in a future release.
bosdyn_msgs/MobilityParamsStairsMode stairs_mode

# Allow the robot to move with degraded perception when there are perception faults.
bool allow_degraded_perception

# Control of obstacle avoidance.
bosdyn_msgs/ObstacleParams obstacle_params
bool obstacle_params_is_set

# Swing height setting
bosdyn_msgs/SwingHeight swing_height

# Ground terrain parameters.
bosdyn_msgs/TerrainParams terrain_params
bool terrain_params_is_set

# Prevent the robot from using StairTracker even if in stairs mode.
bool disallow_stair_tracker

# Prevent the robot from automatically walking off a staircase in the case of an error
# (ex: e-stop settle_then_cut, critical battery level)
bool disable_stair_error_auto_descent

# Robot Body External Force parameters
bosdyn_msgs/BodyExternalForceParams external_force_params
bool external_force_params_is_set

# Prevent the robot from pitching to get a better look at rearward terrain except in stairs
# mode.
bool disallow_non_stairs_pitch_limiting

# Disable the secondary nearmap-based cliff avoidance that runs while on stairs.
bool disable_nearmap_cliff_avoidance

