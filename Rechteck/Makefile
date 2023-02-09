HEADERS = rechteck.h

default: Rechner

Rechner.o: Rechner.c $(HEADERS)
	gcc -c Rechner.c -o Rechner.o

rechteck.o: rechteck.c
	gcc -c rechteck.c -o rechteck.o

Rechner: Rechner.o rechteck.o
	gcc Rechner.o rechteck.o -o Rechner

clean:
	-rm -f Rechner.o
	-rm -f rechteck.o
	-rm -f Rechner
	
