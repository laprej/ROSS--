#ifndef PHOLD_H
#define PHOLD_H

#include "LP.h"
#include "Model.h"

namespace ROSS {

class Phold : public Model<Phold> {
public:
    void init        (Phold *st, LP *lp);
};

}

#endif /* PHOLD_H */
