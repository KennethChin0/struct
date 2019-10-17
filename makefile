
all: funcs.o main.o
	gcc -o program funcs.o main.o

main.o: main.c headers.h
	gcc -c main.c headers.h

funcs.o: funcs.c headers.h
	gcc -c funcs.c

run:
	./program
