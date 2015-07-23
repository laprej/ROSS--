SET(ROSS_srcs
Executive.cpp
Executive.h
Event.cpp
Event.h
FutureEventList.cpp
FutureEventList.h
KP.cpp
KP.h
LP.cpp
LP.h
Model.cpp
Model.h
PE.cpp
PE.h
Timestamp.cpp
Timestamp.h
globals.h
)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-rtti")

ADD_LIBRARY(ROSS ${ROSS_srcs})
