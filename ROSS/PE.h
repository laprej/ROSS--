#ifndef ROSSMM_PE_H
#define ROSSMM_PE_H

#include <vector>
#include "globals.h"
#include "FutureEventList.h"

namespace ROSS {

class KP;
struct Event;

class PE {
    uint32_t peID;
    std::vector<KP *> kpVector;
    Event *curEvent;
    FutureEventList FEL;

public:
    Event *currentEvent() const { return curEvent; }
    uint32_t PEID() const { return peID; }
};

}
#endif /* ROSSMM_PE_H */
