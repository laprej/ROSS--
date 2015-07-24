#ifndef ROSSMM_GLOBALS_H
#define ROSSMM_GLOBALS_H

#include "Timestamp.h"

namespace ROSS {

enum Sync {
    SEQUENTIAL,
    CONSERVATIVE,
    OPTIMISTIC,
    OPTIMISTIC_DEBUG
};

extern Sync gSyncProtocol;
extern Timestamp gLookahead;

}

#endif /* ROSSMM_GLOBALS_H */
