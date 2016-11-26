#Makefile

CC=gcc
CFLAGS=
OBJS=testsh.o
LIBS=
all :	testSH

testSH:	$(OBJS)
	$(CC) $(CFLAGS) -o testSH $(OBJS) $(LIBS)

testsh.o:	testsh.c
	$(CC) $(CFLAGS) -c testsh.c

clean:
	rm -f $(OBJS) testSH core
