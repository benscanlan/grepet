all: test

test: test.o
	gcc test.o  -o  test
	rm test.o

test.o: test.c
	gcc -c -Wall test.c

clean:
	rm *.o test
