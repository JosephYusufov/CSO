program: one.o two.o

one.o: one.c
	gcc one.c -o one.o

two.o: two.c
	gcc two.c -o two.o