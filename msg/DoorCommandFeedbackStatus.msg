# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# STATUS_UNKNOWN should never be used. If used, an internal error has happened.
int8 STATUS_UNKNOWN=0
# Robot has finished opening the door.
int8 STATUS_COMPLETED=1
# Robot is attempting to open the door.
int8 STATUS_IN_PROGRESS=2
# The robot has stopped making progress in opening and going through the door. It will
# keep trying but may stay in this state indefinitely.
int8 STATUS_STALLED=3
# The robot could not detect the door. It will keep trying but may stay in this state
# indefinitely.
int8 STATUS_NOT_DETECTED=4

int8 value
