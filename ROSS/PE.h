#ifndef ROSSMM_PE_H
#define ROSSMM_PE_H

#include <vector>
#include "globals.h"

namespace ROSS {

class KP;

class PE {
    std::vector<KP *> kpVector;
};

}
#endif /* ROSSMM_PE_H */
