#ifndef EVENT_H
#define EVENT_H

#include <bitset>

class Event {
    uint64_t event_id;
    std::bitset<64> bf;
};

#endif /* EVENT_H */
