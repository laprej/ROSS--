#ifndef EVENT_H
#define EVENT_H

#include <bitset>
#include "globals.h"
#include "Timestamp.h"

class LP;

struct Event {
    Timestamp timeStamp;
    uint64_t eventID;
    std::bitset<64> bitField;
    LP *srcLP;
    LP *dstLP;
};

#endif /* EVENT_H */
