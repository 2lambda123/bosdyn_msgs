# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Status of request is unknown. Check the status code of the response header.
int8 STATUS_UNKNOWN=0

# Request was accepted; GetObjectListResponse must still be checked to verify the changes.
int8 STATUS_OK=1

# The mutation object's ID is unknown such that the service could not recognize this
# object. This error applies to the CHANGE and DELETE actions, since it must identify the
# object by it's id number given by the service.
int8 STATUS_INVALID_MUTATION_ID=2

# The mutation request is not allowed because it is attempting to change or delete an
# object detected by Spot's perception system.
int8 STATUS_NO_PERMISSION=3

# The mutation request is not allowed because some aspect of the world object is invalid.
# For example, something could be defined in an unallowed reference frame.
int8 STATUS_INVALID_WORLD_OBJECT=4

int8 value
