# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# An error associated with a particular capture action and piece of data.

# Identifier for the data to be saved.
bosdyn_msgs/DataIdentifier data_id
bool data_id_is_set
# Human-readable message describing the error.
# If a capability was misconfigured, e.g. by an invalid CustomParam in one of the requests,
# it should show up here.
string error_message
# Custom plugin-specific data about the problem.
#     google.protobuf.Any error_data = 3;
