#ifndef LP_H
#define LP_H

#include <cstdint>

class KP;
class Event;

class LP {
    /// The KP that "owns" this LP.
    KP *kp;

public:
    typedef uint64_t ID;

    void sendEvent(Event *e);
};

#endif /* LP_H */
