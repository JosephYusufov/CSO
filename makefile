myprogram: main.o prime.o
	gcc -std=c99 main.o -o myprogram.exe
main.o: main.c
	gcc -std=c99 -c main.c -o main.o
util.o: util.c
	gcc -std=c99 -c util.c -o util.o
prime.o: prime.c
	gcc prime.c -o prime.o
clean:
	rm *.o homework.exe