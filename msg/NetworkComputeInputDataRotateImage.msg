# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Unspecified rotation method. Do not use.
int8 ROTATE_IMAGE_UNKNOWN=0

# No rotation applied.
int8 ROTATE_IMAGE_NO_ROTATION=1

# Rotate the images so the horizon is not rolled with respect to gravity.
int8 ROTATE_IMAGE_ALIGN_HORIZONTAL=2

# Rotate the images so that the horizon in the image is aligned with the inclination of
# the body. For example, when applied to the left body camera this option rotates the image
# so that the world does not appear upside down when the robot is standing upright, but if
# the body is pitched up, the image will appear rotated.
int8 ROTATE_IMAGE_ALIGN_WITH_BODY=3

int8 value
