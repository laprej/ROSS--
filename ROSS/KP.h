#ifndef ROSSMM_KP_H
#define ROSSMM_KP_H

#include <vector>
#include "globals.h"

namespace ROSS {

class PE;
class LP;
struct Event;

class KP {
    /// The LPs associated with this particular KP
    std::vector<LP *> lpVector;
    /// The Future Event List
    std::vector<Event *> FEL;
    /// The PE that "owns" this KP.
    PE *pe;

public:
    KP(unsigned numLPs = 16);
    PE * PE() const;
    void setPE(class PE *p);
};

}

#endif /* ROSSMM_KP_H */
