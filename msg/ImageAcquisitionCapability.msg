# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Description of an image acquisition capability. The image acquisition capabilities will be
# available through the main data acquisition service on robot and are populated based on all
# bosdyn.api.ImageService services registered to the robot's directory.

# The image service's service name used in directory registration.
string service_name

# DEPRECATED as of 3.1.0. Please use "image_sources" below for information regarding the image
# source associated with the service.

# List of image sources reported by the image service (through the ListImageSources RPC).
bosdyn_msgs/ImageSource[] image_sources
