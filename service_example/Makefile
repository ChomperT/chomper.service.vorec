
CC = g++
STRIP = strip

CFLAGS = -O3 -g

CFLAGS +=  -I./include -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include

CXXFLAGS = $(CFLAGS)

LDFLAGS =  -llunaservice -Wl,--allow-shlib-undefined
APP = cime


SRC = fakeservice.cpp


OBJ = $(addsuffix .o, $(basename $(SRC)))

all: $(OBJ)
	$(CXX) $(LDFLAGS) $(OBJ) -o $(APP)

clean: 
	rm -r *.o chomper*
