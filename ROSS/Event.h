#ifndef EVENT_H
#define EVENT_H

#include <bitset>

#include "Timestamp.h"

class Event {
    Timestamp timeStamp;
    uint64_t eventID;
    std::bitset<64> bitField;
};

#endif /* EVENT_H */
