# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# The SetLocalization response message contains the resulting localization to the map.

# Common response header.
bosdyn_msgs/ResponseHeader header
bool header_is_set

# Result of using the lease.
bosdyn_msgs/LeaseUseResult lease_use_result
bool lease_use_result_is_set

# Return status for the request.
bosdyn_msgs/SetLocalizationResponseStatus status

# If set, describes the reason the status is not OK.
string error_report

# Result of localization.
bosdyn_msgs/Localization localization
bool localization_is_set



# Alternative information if the localization is ambiguous.
bosdyn_msgs/SetLocalizationResponseSuspectedAmbiguity suspected_ambiguity
bool suspected_ambiguity_is_set

# If the status is ROBOT_IMPAIRED, this is why the robot is impaired.
bosdyn_msgs/RobotImpairedState impaired_state
bool impaired_state_is_set

# This status determines whether the robot has compatible sensors for the
# map that was recorded. Note that if sensors aren't working, STATUS_IMPARIED
# will be returned, rather than STATUS_INCOMPATIBLE_SENSORS.
bosdyn_msgs/SensorCompatibilityStatus sensor_status
bool sensor_status_is_set

# Graph Nav will check the quality of the resulting localization and report the status
# here. Note that to preserve backwards compatability with 3.2 and earlier, a poor quality check
# does not result in this RPC failing.
bosdyn_msgs/SetLocalizationResponseQualityCheckResult quality_check_result
