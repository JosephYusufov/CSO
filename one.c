#include <stdio.h>
#include <stdlib.h>
const int MAX_BUFFER = 255;

void printFile(char* fileName) {
    FILE *fd = fopen(fileName, "r");
    char buffer[1];
    char prev;
    int i;
    i = 0;
    while(fgets(buffer, 2, fd)){
        // printf("%d\n\tprev:   [%c]\n\tbuffer: [%c]\n", i, prev, buffer[0]);
        if(i > 0){
            if(!((*buffer == ' ') && (prev == ' '))){
            printf("%c", *buffer);
            }
        } else {
            printf("%c", *buffer);
        }
        i++;
        prev = *buffer;
    }
    printf("\n");
    fclose(fd);
}

void main(int args, char* argv[]){
    if(args > 1){
        printFile(argv[1]);
    }
    // printf("Hello World");
    // printf("args: %d\n", args);
    // char prev[1];
    // *prev = 'c';
    // prev = char[1];
    // puts(prev);
}
