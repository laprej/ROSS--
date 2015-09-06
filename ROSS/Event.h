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

struct Event {
    /// This is the FEL hook.  See FutureEventList.h.
    intrusive::bs_set_member_hook<> felHook;
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
