# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# If true, loop closure will be fully disabled at this waypoint.
bool disable_loop_closure
# If true, collision checking will be disabled for loop closures
# from or to this waypoint.
bool disable_collision_check
# If nonzero, edges are allowed to be this long when making loop
# closures to this waypoint. If zero, global/default settings will
# be used.
float64 max_edge_length
# If nonzero, loop closures to this waypoint may shortcut this amount
# of path length. If zero, global/default settings will be used.
float64 max_odometry_path_length
