all:
	gcc -Wall -c ./src/bool.c ./src/arraylist.c main.c
	gcc bool.o arraylist.o main.o -o main

clean:
	rm -rf *.o main