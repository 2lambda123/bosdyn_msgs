# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# The GetRecordStatus response message returns whether the service is currently recording and what
# the persistent recording environment is at the time the request was recieved.

# Common response header.
bosdyn_msgs/ResponseHeader header
bool header_is_set
# If true, the record service is actively recording
# a chain.
bool is_recording
# The current persistent recording environment.
bosdyn_msgs/RecordingEnvironment recording_environment
bool recording_environment_is_set
bosdyn_msgs/GetRecordStatusResponseMapState map_state
bosdyn_msgs/GetRecordStatusResponseStatus status
# If the status is ROBOT_IMPAIRED, this is why the robot is impaired.
bosdyn_msgs/RobotImpairedState impaired_state
bool impaired_state_is_set
# This is the robot local timestamp that graph_nav began recording on.
# If the Start Recording Request's session start time is provided, this should
# be the same as the request's session start time.
builtin_interfaces/Time session_start_time
bool session_start_time_is_set
# General statistics of the map loaded in GraphNav.
bosdyn_msgs/MapStats map_stats
bool map_stats_is_set
