#ifndef LP_H
#define LP_H

#include <cstdint>

class KP;

class LP {
    /// The KP that "owns" this LP.
    KP *kp;

public:
    typedef uint64_t ID;
};

#endif /* LP_H */
