#include <iostream>
#include <vector>

#include "phold.h"
#include "Event.h"

using namespace ROSS;

void Phold::init        (Phold *st, LP *lp)
{
    std::cout << "Hello, world!\n";
    Event *e = new Event;
    lp->sendEvent(e);
}

class Bar : public Model<Bar> {
    void init(Bar *st, LP *lp) {
    }
};

int LP::mapping(LP::ID globalID)
{
    return 0;
}

int main(int argc, char *argv[])
{
    Phold foo;
    Bar bar;

    std::vector<ModelBase*> baz;

    baz.push_back(&foo);
    baz.push_back(&bar);

    foo.init(0, 0);
    foo.event(0, 0, 0);

    return 0;
}
