#include "LP.h"
#include "Event.h"

#include <cassert>

using namespace ROSS;

void
LP::sendEvent(Event *e)
{
    if (gSyncProtocol == CONSERVATIVE) {
        // Check for LOOKAHEAD violations
        if (e->timeStamp - e->srcLP->CurrentTime()) {
        }
    }
}

Timestamp
LP::CurrentTime() const
{
    return curTime;
}
