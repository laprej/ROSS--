#include "phold.h"

#include <iostream>
#include <vector>

using namespace ROSS;

void Phold::init        (Phold *st, LP *lp)
{
    std::cout << "Hello, world!\n";
}

class Bar : public Model<Bar> {
    void init(Bar *st, LP *lp) {
    }
};

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
