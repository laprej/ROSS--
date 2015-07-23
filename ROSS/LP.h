#ifndef ROSSMM_LP_H
#define ROSSMM_LP_H

#include <cstdint>
#include "globals.h"

namespace ROSS {

class KP;
class Event;

class LP {
    /// The KP that "owns" this LP.
    KP *kp;

public:
    typedef uint64_t ID;

    void sendEvent(Event *e);
};

}

#endif /* ROSSMM_LP_H */
