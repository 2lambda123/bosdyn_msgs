# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Human-friendly name of the waypoint. For example, "Kitchen Fridge"
string name

# The time that the waypoint was created while recording a map.
builtin_interfaces/Time creation_time
bool creation_time_is_set

# Estimate of the variance of ICP when performed at this waypoint, collected at record
# time.
bosdyn_msgs/SE3Covariance icp_variance
bool icp_variance_is_set

# Options for how to localize to a waypoint (if at all).
bosdyn_msgs/WaypointAnnotationsLocalizeRegion scan_match_region
bool scan_match_region_is_set

# How this waypoint was made.
bosdyn_msgs/WaypointWaypointSource waypoint_source

# Information about the state of the client when this waypoint was created.
bosdyn_msgs/ClientMetadata client_metadata
bool client_metadata_is_set

# This waypoint may have specific settings to help with loop closure. This
# Is useful for example when trying to ensure that a loop closure occurs at
# a particular intersection or near a dock.
bosdyn_msgs/WaypointAnnotationsLoopClosureSettings loop_closure_settings
bool loop_closure_settings_is_set
