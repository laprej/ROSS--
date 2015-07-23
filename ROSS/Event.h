#ifndef ROSSMM_EVENT_H
#define ROSSMM_EVENT_H

#include <bitset>
#include "globals.h"
#include "Timestamp.h"

namespace ROSS {

class LP;

struct Event {
    Timestamp timeStamp;
    uint64_t eventID;
    std::bitset<64> bitField;
    LP *srcLP;
    LP *dstLP;
};

}

#endif /* ROSSMM_EVENT_H */
