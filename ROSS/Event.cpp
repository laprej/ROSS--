#include "Event.h"

using namespace ROSS;

/// Make sure we get causality correct
void
Event::causedBy(Event *e)
{
    assert(this != e && "Error: Event causality loop!");
    this->causeNext = e->causedByMe;
    e->causedByMe = this;
}
