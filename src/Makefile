CC = gcc
CFLAGS = -I. -Wall
LDFLAGS = -L.
LDLIBS = -lrobot
LIBS = -lwiringPi
	
% : %.c
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS) $(LDLIBS) $(LIBS)
