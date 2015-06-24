#ifndef EVENT_H
#define EVENT_H

#include <bitset>

class Event {
    unsigned long event_id;
    std::bitset<64> bf;
};

#endif /* EVENT_H */
