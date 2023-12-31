# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Frame that the initial wrench will be expressed in
string frame_name
# Direction of the initial wrench to be applied
# Depending on the task, either the force vector or the
# torque vector are required to be specified. The required
# vector should not have a magnitude of zero and will be
# normalized to 1. For tasks that require the force vector,
# the torque vector can still be specified as a non-zero vector
# if it is a good guess of the axis of rotation of the task.
# (for e.g. TASK_TYPE_SE3_ROTATIONAL_TORQUE task types.)
# Note that if both vectors are non-zero, they have to be perpendicular.
# Once the constrained manipulation system estimates the
# constraint, the init_wrench_direction and frame_name
# will no longer be used.
geometry_msgs/Wrench init_wrench_direction_in_frame_name
bool init_wrench_direction_in_frame_name_is_set

# The desired velocity to move the object
# For all tasks besides SE3_ROTATIONAL_TORQUE, set
# tangential_speed in units of m/s. For SE3_ROTATIONAL_TORQUE,
# set rotational_speed with units of rad/s.
bosdyn_msgs/ConstrainedManipulationCommandRequestOneOfTaskSpeed task_speed

# The limit on the force that is applied on any translation direction
# Value must be positive
# If unspecified, a default value of 40 N will be used.
float64 force_limit
bool force_limit_is_set
# The limit on the torque that is applied on any rotational direction
# Value must be positive
# If unspecified, a default value of 4 Nm will be used.
float64 torque_limit
bool torque_limit_is_set

# Geometrical category of a task. See the constrained_manipulation_helper function
# for examples of each of these categories. For e.g. SE3_CIRCLE_FORCE_TORQUE corresponds
# to lever type objects.
bosdyn_msgs/ConstrainedManipulationCommandRequestTaskType task_type

# The timestamp (in robot time) by which a command must finish executing.
# This is a required field and used to prevent runaway commands.
builtin_interfaces/Time end_time
bool end_time_is_set

# Whether to enable the robot to take steps during constrained manip to keep the hand in
# the workspace.
bool enable_robot_locomotion
bool enable_robot_locomotion_is_set

bosdyn_msgs/ConstrainedManipulationCommandRequestControlMode control_mode

# Desired final task position to achieve
# The position is computed relative to the starting position.
bosdyn_msgs/ConstrainedManipulationCommandRequestOneOfTaskTargetPosition task_target_position

# Acceleration limit for the planned trajectory in the free task DOF.
# Note that the units of this variable will be m/(s^2) or rad/(s^2) depending
# on the choice of target_linear_position vs. target_angle above.
float64 accel_limit
bool accel_limit_is_set

# Constrained manipulation estimates the task frame given the observed initial motion.
# Setting this to false saves and uses the estimation state from the previous
# constrained manipulation move. This is true by default.
bool reset_estimator
bool reset_estimator_is_set

