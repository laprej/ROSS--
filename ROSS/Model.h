#ifndef ROSSMM_MODEL_H
#define ROSSMM_MODEL_H

#include "globals.h"
#include "LP.h"

namespace ROSS {

class Event;
class LP;

class ModelBase {
public:
};

template<typename stateType>
class Model : public ModelBase {
public:
    void mapping     (LP::ID globalID) { }
    void init        (stateType *st, LP *lp) { }
    void preRun      (stateType *st, LP *lp) { }
    void final       (stateType *st, LP *lp) { }
    void event       (stateType *st, LP *lp, Event *e) { }
    void reverseEvent(stateType *st, LP *lp, Event *e) { }
};

}

#endif /* ROSSMM_MODEL_H */
