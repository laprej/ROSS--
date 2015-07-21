#ifndef PHOLD_H
#define PHOLD_H

#include "LP.h"
#include "Model.h"

class Phold : public Model<Phold> {
public:
    void mapping     (LP::ID globalID);
    void init        (Phold *st, LP *lp);
    void preRun      (Phold *st, LP *lp);
    void final       (Phold *st, LP *lp);
    void event       (Phold *st, LP *lp, Event *e);
    void reverseEvent(Phold *st, LP *lp, Event *e);
};

#endif /* PHOLD_H */
