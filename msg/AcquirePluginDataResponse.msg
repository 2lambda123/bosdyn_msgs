# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Common response header
bosdyn_msgs/ResponseHeader header
bool header_is_set

# Result of the AcquirePluginData RPC call. Further monitoring on the success of the
# acquisition request can be done using the GetStatus RPC.
bosdyn_msgs/AcquirePluginDataResponseStatus status

# Identifier which can be used to check the status of or cancel the acquisition action..
uint32 request_id

# Time (in the robot's clock) by which this capture should definitely be complete.
# If it is not complete by this time, something has gone wrong.
builtin_interfaces/Time timeout_deadline
bool timeout_deadline_is_set

# Filled out if status is STATUS_CUSTOM_PARAMS_ERROR.
bosdyn_msgs/CustomParamError custom_param_error
bool custom_param_error_is_set
