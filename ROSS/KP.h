#ifndef KP_H
#define KP_H

#include <vector>

class PE;
class LP;
class Event;

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

#endif /* KP_H */
