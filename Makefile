#Makefile

CC=gcc
CFLAGS=
OBJS=testsh.o ls_dir.o
LIBS=
all :	testSH

testSH:	$(OBJS)
	$(CC) $(CFLAGS) -o testSH $(OBJS) $(LIBS)

testsh.o:	testsh.c
	$(CC) $(CFLAGS) -c testsh.c

ls_dir.o:	ls_dir.c
	$(CC) $(CFLAGS) -c ls_dir.c

clean:
	rm -f $(OBJS) testSH core
