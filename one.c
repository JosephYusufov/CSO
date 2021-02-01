#include <stdio.h>
#include <stdlib.h>
const int MAX_BUFFER = 255;

void printFile(char* fileName) {
    FILE *fd = fopen(fileName, "r");
    char buffer[MAX_BUFFER];
    while(fgets(buffer, MAX_BUFFER, fd)){
        puts(buffer);
    }
    fclose(fd);
}

void main(int args, char* argv[]){
    if(args > 0){
        printFile(argv[1]);
    }
}
