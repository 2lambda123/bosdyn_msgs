# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Request that the remote tick itself for a particular node in the mission.

# Common request header.
bosdyn_msgs/RequestHeader header
bool header_is_set
# Session ID as returned by the EstablishSessionResponse.
# Used to guarantee coherence between a single client and a servicer.
string session_id

# All leases that the remote service may need.
bosdyn_msgs/Lease[] leases

# Inputs provided to the servicer.
# DEPRECATED as of 3.3.  Please use 'params' instead.
bosdyn_msgs/KeyValue[] inputs

# Parameters set by the client.  Depending on the structure of the mission,
# the value may change during ticking.
bosdyn_msgs/DictParam params
bool params_is_set

# Callbacks can be used to record data using Data Acquisition.  The mission
# can provide a hint to the callback with the current group, so that the
# data the callback saves is correctly grouped with other data generated
# by the mission.  The value may change during ticking.
string group_name
