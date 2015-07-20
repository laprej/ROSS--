#include "phold.h"

#include <iostream>

void Phold::mapping     (LP::ID globalID)
{
}
void Phold::init        (Phold *st, LP *lp)
{
    std::cout << "Hello, world!\n";
}
void Phold::preRun      (Phold *st, LP *lp)
{
}
void Phold::final       (Phold *st, LP *lp)
{
}
void Phold::event       (Phold *st, LP *lp, Event *e)
{
}
void Phold::reverseEvent(Phold *st, LP *lp, Event *e)
{
}

int main(int argc, char *argv[])
{
    Phold foo;
    foo.init(0, 0);

    return 0;
}
