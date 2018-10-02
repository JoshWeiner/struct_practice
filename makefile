all: go
	./go

go: structs.o
	gcc -o go structs.o

structs.o: structs.c structs.h
	gcc -c structs.c

clean:
	rm *.o
	rm *.exe
