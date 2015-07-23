#ifndef ROSSMM_GLOBALS_H
#define ROSSMM_GLOBALS_H

namespace ROSS {

enum Sync {
    SEQUENTIAL,
    CONSERVATIVE,
    OPTIMISTIC,
    OPTIMISTIC_DEBUG
};

extern Sync gSyncProtocol;

}

#endif /* ROSSMM_GLOBALS_H */
