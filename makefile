# myprogram: main.o prime.o
# 	gcc -std=c99 main.o -o myprogram.exe
getline.exe: getline.o
	gcc getline.o -o getline.exe
getline.o: getline.c
	gcc -c getline.c -o getline.o
htoi.exe: htoi.o
	gcc htoi.o -o htoi.exe -lm
htoi.o: htoi.c
	gcc -c htoi.c -o htoi.o
# main.o: main.c
# 	gcc -std=c99 -c main.c -o main.o
# util.o: util.c
# 	gcc -std=c99 -c util.c -o util.o
# prime.o: prime.c
# 	gcc -std=c99 prime.c -o prime.o
clean:
	rm *.o homework.exe