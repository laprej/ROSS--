#ifndef ROSSMM_LP_H
#define ROSSMM_LP_H

#include <cstdint>
#include "globals.h"
#include "Timestamp.h"

namespace ROSS {

class KP;
struct Event;

class LP {
public:
    typedef uint64_t ID;

    /// Return the global identifier for this LP
    ID GID() const { return globalID; }
    /// Send a (pre-populated) event
    void sendEvent(Event *e);
    /// Get the current time for this LP
    Timestamp CurrentTime() const;
    KP *KP() const { return kp; }

    /// This is a USER-DEFINED method
    static uint32_t mapping(LP::ID globalID);

private:
    /// The KP that "owns" this LP.
    class KP *kp;
    /// Timestamp of the
    Timestamp curTime;
    /// Global identifier
    ID globalID;
};

}

#endif /* ROSSMM_LP_H */
