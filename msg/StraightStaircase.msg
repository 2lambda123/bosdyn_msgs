# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# DEPRECATED as of 3.3.  Please use StaircaseWithLandings.

# The staircase origin is the bottom-center of the first rise.
bosdyn_msgs/StraightStaircaseOneOfLocation location

# A single stair from a staircase.
# Straight staircases have two landings, one at the top and one at the bottom.
# Landings are areas of free space before and after the stairs, and are represented
# as oriented bounding boxes.
# Each stair should be rise followed by run. The last stair will have zero run.
bosdyn_msgs/StraightStaircaseStair[] stairs
# The lowermost landing of the stairs. The robot will try to
# align itself to the stairs while on this landing.
bosdyn_msgs/StraightStaircaseLanding bottom_landing
bool bottom_landing_is_set
# The uppermost landing of the stairs.
bosdyn_msgs/StraightStaircaseLanding top_landing
bool top_landing_is_set
