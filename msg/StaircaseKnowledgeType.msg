# AUTOMATICALLY GENERATED BY PROTO CONVERSION

int8 KNOWLEDGE_TYPE_UNKNOWN=0
# A staircase that was in a map (e.g. an AutoWalk edge annotation).
# Dimensions are expected to be accurate, but location is subject to localization accuracy.
int8 KNOWLEDGE_TYPE_MAPPED=1
# A staircase that we are currently tracking.
# Location should be accurate, but the farther-away portions may be inaccurate.
int8 KNOWLEDGE_TYPE_TRACKED_ONGOING=2
# A recently-traversed staircase that we tracked during the traversal.
# This should be accurate in both dimensions and location, but behind us.
int8 KNOWLEDGE_TYPE_TRACKED_COMPLETED=3
# Something else?
int8 KNOWLEDGE_TYPE_OTHER=4

int8 value
