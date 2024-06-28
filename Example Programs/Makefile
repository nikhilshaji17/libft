# -*- Makefile -*-

all: hellofromthree hellofromtwo

hellofromthree: test3.o test.o
	gcc test.o test3.o -o hellofromthree

test.o: test.c
	gcc -c test.c

test3.o: test3.c
	gcc -c test3.c

hellofromtwo: test2.o test.o
	gcc test.o test2.o -o hellofromtwo

test2.o: test2.c
	gcc -c test2.c

clean:
	del *.o *.exe
