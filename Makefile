all: server

server: server.o
	gcc server.o  -o  server

server.o: server.c
	gcc -c -Wall server.c

clean:
	rm *.o server
