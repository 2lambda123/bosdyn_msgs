# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# A request to play the currently loaded mission for a fixed amount of time.

# Common request header.
bosdyn_msgs/RequestHeader header
bool header_is_set

# Run the mission until this time.
# Pause the mission at that time if we have not received a new PlayMissionRequest.
# This ensures the mission stops relatively quickly if there is an unexpected client drop-out.
# Clients should regularly send PlayMissionRequests with a pause_time that reflects how often
# they expect to check in with the mission service.
builtin_interfaces/Time pause_time
bool pause_time_is_set

# Leases that the mission will need, plus the lease on the mission service.
bosdyn_msgs/Lease[] leases

# Settings active until the next PlayMission or RestartMission request.
bosdyn_msgs/PlaySettings settings
bool settings_is_set

