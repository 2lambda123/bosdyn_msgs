# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Response to the UploadGraphRequest. After uploading a graph, the user is expected
# to upload large data at waypoints and edges (called snapshots). The response provides
# a list of snapshot IDs which are not yet cached on the server. Snapshots with these IDs should
# be uploaded by the client.

# Common response header.
bosdyn_msgs/ResponseHeader header
bool header_is_set
# Status for an upload request.
bosdyn_msgs/UploadGraphResponseStatus status
# Details about how the lease was used.
bosdyn_msgs/LeaseUseResult lease_use_result
bool lease_use_result_is_set
# The waypoint snapshot ids for which there was cached data.
string[] loaded_waypoint_snapshot_ids
# The waypoint snapshot ids for which there is no cached data.
string[] unknown_waypoint_snapshot_ids
# The edge snapshot ids for which there was cached data.
string[] loaded_edge_snapshot_ids
# The edge snapshot ids for which there was no cached data.
string[] unknown_edge_snapshot_ids
# Large graphs can only be uploaded if the license permits them.
bosdyn_msgs/LicenseInfoStatus license_status
bosdyn_msgs/SensorCompatibilityStatus sensor_status
bool sensor_status_is_set

# Errors about Area Callbacks in the map.
bosdyn_msgs/AreaCallbackServiceError area_callback_error
bool area_callback_error_is_set

# General map statistics.
bosdyn_msgs/MapStats map_stats
bool map_stats_is_set
# Detailed information about why STATUS_INVALID_GRAPH was returned. This will only
# contain information if the UploadGraph request could not be validated.
# If the returned status is STATUS_INVALID_GRAPH, this contains the detailed information about why the
# graph was invalid. Note that some graph validation errors are warnings and the robot will be able to navigate
# on the graph even when they are present.
bosdyn_msgs/UploadGraphResponseValidationStatus validation_status
bool validation_status_is_set
