HEADERS = fakult.h

default: FakR

FakR.o: FakR.c $(HEADERS)
	gcc -c FakR.c -o FakR.o

fakult.o: fakult.c
	gcc -c fakult.c -o fakult.o

FakR: FakR.o fakult.o
	gcc FakR.o fakult.o -o FakR

clean:
	-rm -f FakR.o
	-rm -f fakult.o
	-rm -f FakR
