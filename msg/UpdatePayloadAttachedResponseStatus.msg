# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# UNKNOWN should never be used. An internal PayloadRegistrationService issue has happened
# if UNKNOWN is set.
int8 STATUS_UNKNOWN=0

# Success.  The payload version has been updated.
int8 STATUS_OK=1

# UpdatePayloadAttached failed because a payload with this GUID does not yet exist.
int8 STATUS_DOES_NOT_EXIST=2

# UpdatePayloadAttached failed because the paylod guid & secret do not match any registered
# payloads.
int8 STATUS_INVALID_CREDENTIALS=3

# UpdatePayloadAttached failed because the requested payload has not yet been authorized.
# Authorize the payload in the webserver first, then try again.
int8 STATUS_PAYLOAD_NOT_AUTHORIZED=4

int8 value
