project: main.o directory.o files.o
	cc main.o directory.o files.o -o project
main.o: main.c tree.h
	cc -c main.c
directory.o: directory.c tree.h
	cc -c directory.c
files.o: files.c tree.h
	cc -c files.c




