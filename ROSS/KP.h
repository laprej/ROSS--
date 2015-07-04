#ifndef KP_H
#define KP_H

#include <vector>

class PE;
class LP;

class KP {
    /// The LPs associated with this particular KP
    std::vector<LP *> lpVector;
    /// The PE that "owns" this KP.
    PE *pe;
};

#endif /* KP_H */
