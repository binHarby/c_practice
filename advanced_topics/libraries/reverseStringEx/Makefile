CC=cc
CFLAGS=-Wall -g

all: libtest

libmycode.o:libmycode.c mycode.h
	$(CC) $(CFLAGS) -c libmycode.c
libtest: libtest.c libmycode.o
	$(CC) $(CFLAGS) -o $@ $^ 
	
