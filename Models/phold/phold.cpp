#include "phold.h"

#include <iostream>
#include <vector>

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

class Bar : public Model<Bar> {
    void init(Bar *st, LP *lp) {
    }
};

int main(int argc, char *argv[])
{
    Phold foo;
    Bar bar;

    std::vector<Model_base*> baz;

    baz.push_back(&foo);
    baz.push_back(&bar);

    foo.init(0, 0);

    return 0;
}
