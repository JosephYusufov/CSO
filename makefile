program: one.o two.o three.o four.o

one.o: one.c
	gcc one.c -o one.o

two.o: two.c
	gcc two.c -o two.o

three.o: three.c
	gcc three.c -o three.o	

four.o: four.c
	gcc four.c -o four.o		