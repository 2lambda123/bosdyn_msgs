# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Tell GraphNav to re-localize the robot using a SetLocalizationRequest. This overrides whatever
# the current localization is. This can be useful to reinitialize the system at a known state.

# Name of the service to use.
string service_name
# Host machine the service is running on.
string host
# If no localization_request is provided, the default options used
# are FIDUCIAL_INIT_NEAREST (the system will initialize to the nearest fiducial).
# Otherwise, the options inside the set_localization_request will be used.
# Note that ko_tform_body in the request will be ignored (it will be recalculated at runtime).
bosdyn_msgs/SetLocalizationRequest localization_request
bool localization_request_is_set
# If true, a poor quality check will not result in the node returning FAILURE.
# If false, the localization will be checked for quality by comparing agains the map data, and
# if the localization is poor quality, the node returns FAILURE.
bool allow_bad_quality
# If non-empty, the blackboard variable with this name will contain the response of the
# graph nav SetLocalization request after this node receives it.
string response_bb_key
