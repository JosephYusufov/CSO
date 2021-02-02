#include <stdio.h>
#include <stdlib.h>
const int MAX_BUFFER = 255;

// Function for Exercise 1
void printEOF(){
    printf("Value of EOF: %d\n", EOF);
}

// Function for Exercise 2
void printFileCleanSpaces(char* fileName) {
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
    // Executing Exercise 1
    printEOF();

    // Executing Exercise 2
    if(args > 1){
        printFileCleanSpaces(argv[1]);
    }
}
