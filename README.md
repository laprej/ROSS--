ROSS--
------
Whereas ROSS was written (more or less) exclusively in C, ROSS-- aims to leverage many of the conveniences that C++ offers.
These may include:
* templates
* containers
* the STL
* inheritance
* Boost
* anything else I may have missed

By taking advantage of the above, ideas can be developed and tested more quickly and in a reasonably performant manner.

The [Boost](http://www.boost.org) C++ libraries provide a splay tree as well as intrusive containers (which differ from STL containers which store *copies* of the data).

NOTE: You may need to turn on some C++11-specific flags.  Clang required this for a clean compile.
