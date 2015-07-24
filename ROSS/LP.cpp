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

    if (gSyncProtocol == CONSERVATIVE) {
        // Check for LOOKAHEAD violations
        if (e->timeStamp - sendingLP->CurrentTime() < gLookahead) {
            abort();
        }
    }

    e->causedBy(curPE->currentEvent());
}

Timestamp
LP::CurrentTime() const
{
    return curTime;
}
