#include "LP.h"
#include "Event.h"

#include <cassert>

using namespace ROSS;

void
LP::sendEvent(Event *e)
{
    LP *sendingLP = e->srcLP;

    if (gSyncProtocol == CONSERVATIVE) {
        // Check for LOOKAHEAD violations
        if (e->timeStamp - sendingLP->CurrentTime() < gLookahead) {
            abort();
        }
    }
}

Timestamp
LP::CurrentTime() const
{
    return curTime;
}
