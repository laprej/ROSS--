#include "Event.h"

using namespace ROSS;

/// Make sure we get causality correct
void
Event::causedBy(Event *e)
{
    this->causeNext = e->causedByMe;
    e->causedByMe = this;
}
