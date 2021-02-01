one.exe: one.o
	gcc one.o -o one.exe

one.o: one.c
	gcc -c one.c -o one.o

clean:
	rm *.o one