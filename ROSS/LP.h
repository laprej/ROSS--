#ifndef ROSSMM_LP_H
#define ROSSMM_LP_H

#include <cstdint>
#include "globals.h"
#include "Timestamp.h"

namespace ROSS {

class KP;
struct Event;

class LP {
    /// The KP that "owns" this LP.
    KP *kp;
    Timestamp curTime;

public:
    typedef uint64_t ID;

    void sendEvent(Event *e);
    Timestamp CurrentTime() const;
};

}

#endif /* ROSSMM_LP_H */
