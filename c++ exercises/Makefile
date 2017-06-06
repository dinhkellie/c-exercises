OBJS = calc.cpp calc.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

default: calc

calc: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o calc
