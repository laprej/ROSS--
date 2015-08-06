#ifndef ROSSMM_EVENT_H
#define ROSSMM_EVENT_H

#include <bitset>
#include <boost/intrusive/splaytree.hpp>
#include <boost/intrusive/bs_set_hook.hpp>
#include "globals.h"
#include "Timestamp.h"

namespace intrusive = boost::intrusive;

namespace ROSS {

class LP;

/// We inherit from bs_set_base_hook to get hooks to support splay operations
struct Event : public intrusive::bs_set_base_hook<> {
    Timestamp timeStamp;
    uint64_t eventID;
    std::bitset<64> bitField;
    LP *srcLP;
    LP *dstLP;

    void causedBy(Event *e);

private:
    /// Causality
    Event *causedByMe = 0;
    Event *causeNext  = 0;
};

}

#endif /* ROSSMM_EVENT_H */
