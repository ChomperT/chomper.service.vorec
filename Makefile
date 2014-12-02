
CC = arm-linux-gnueabi-gcc 
CXX = arm-linux-gnueabi-g++
STRIP = arm-linux-gnueabi-strip

CFLAGS = -march=armv6 -mfloat-abi=softfp -mfpu=vfpv3 -O3

CFLAGS +=  -I./include -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include

CXXFLAGS = $(CFLAGS)

LDFLAGS =  -llunaservice -Wl,--allow-shlib-undefined -march=armv6 -lopencore-amrnb -g
APP = chomper.service.recorder


SRC = 	main.c \
	vorec.c \
	dec.cpp \
	wav.cpp 
#	fakeservice.cpp


OBJ = $(addsuffix .o, $(basename $(SRC)))

all: $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $(APP)
	$(STRIP) $(APP)

clean: 
	rm -r *.o chomper*
