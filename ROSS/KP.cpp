#include "KP.h"

using namespace ROSS;

KP::KP(unsigned numLPs)
{
    lpVector = std::vector<LP *>(numLPs);
}

PE *
KP::PE() const
{
    return pe;
}

void
KP::setPE(class PE *p)
{
    pe = p;
}
