# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# An operator message to be added to the robot's logs.
# These are notes especially intended to mark when logs should be preserved and reviewed
# to ensure that robot hardware and/or software is working as intended.

# DEPRECATED as of 2.1.0: Please use the DataBufferService instead of the LogAnnotationService.
# Will be removed in 4.0.

# String annotation message to add to the log.
string message

# Required timestamp of data in robot clock time.
builtin_interfaces/Time timestamp
bool timestamp_is_set

# Optional timestamp of data in client clock time.
builtin_interfaces/Time timestamp_client
bool timestamp_client_is_set
