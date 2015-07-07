#ifndef MODEL_H
#define MODEL_H

#include "LP.h"

class Event;
class LP;

template<typename stateType>
class Model {
    void mapping     (LP::ID globalID);
    void init        (stateType *st, LP *lp);
    void preRun      (stateType *st, LP *lp);
    void final       (stateType *st, LP *lp);
    void event       (stateType *st, LP *lp, Event *e);
    void reverseEvent(stateType *st, LP *lp, Event *e);
};

#endif /* MODEL_H */
