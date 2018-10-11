all: hw7.o list.o
    gcc hw7.o list.o
	
hw7.o: hw7.c list.h
    gcc -c hw7.c
	
list.o: list.c list.h
    gcc -c list.c