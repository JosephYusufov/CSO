homework.exe: homework.o
	gcc homework.o -o homework.exe

homework.o: homework.c
	gcc -c homework.c -o homework.o

clean:
	rm *.o homework.exe