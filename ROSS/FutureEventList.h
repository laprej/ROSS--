#ifndef ROSSMM_FUTURE_EVENT_LIST_H
#define ROSSMM_FUTURE_EVENT_LIST_H

#include <boost/intrusive/splaytree.hpp>
#include <boost/intrusive/bs_set_hook.hpp>
#include "Event.h"

namespace intrusive = boost::intrusive;

namespace ROSS {

/// This class will hold our future event list (FEL).
/// Mostly this will simply be a wrapper for whatever type of event management
/// we're using or experimenting on.
using MemberOption = intrusive::member_hook<Event,
    intrusive::bs_set_member_hook<>, &Event::felHook>;
using FutureEventList = intrusive::splaytree<Event, MemberOption>;

}

#endif /* ROSSMM_FUTURE_EVENT_LIST_H */
