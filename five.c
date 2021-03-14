#include <stdio.h>

int main(int argc, char *argv[]){
    if(argc != 4){
        printf("Error: provide three arguments.\n");
        return 1;
    }

    char *str = argv[1];
    char *except = argv[2];
    char *dup = argv[3];
    char c;

    while(c = *(argv[1]++)){
        if(!(c >= 97 && c <= 122)){
            printf("Error: illegal string.\n");
            return 1; 
        }

        
    }
}