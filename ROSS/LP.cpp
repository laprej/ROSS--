#include "LP.h"
#include "KP.h"
#include "PE.h"
#include "Event.h"

#include <cassert>

using namespace ROSS;

void
LP::sendEvent(Event *e)
{
    LP *sendingLP = e->srcLP;
    PE *curPE     = sendingLP->KP()->PE();

    if (gSyncProtocol == Sync::CONSERVATIVE) {
        // Check for LOOKAHEAD violations
        if (e->timeStamp - sendingLP->CurrentTime() < gLookahead) {
            abort();
        }
    }

    e->causedBy(curPE->currentEvent());

    // Should we pull the mapping function out of the model and make a
    // global function instead?  All LPs must map somewhere and it may
    // make more sense to do it that way vs. model-specific mapping

    // call LP remote mapping function to get dest_pe
    uint32_t destPEID = mapping(e->dstLP->GID());

    if (destPEID == curPE->PEID()) {
        // If destination PE is the current PE, i.e., a send to ourself
    }
    else {
        // Send it over the network for proper handling
    }
}

Timestamp
LP::CurrentTime() const
{
    return curTime;
}
