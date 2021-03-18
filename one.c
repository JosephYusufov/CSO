#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]){
    if(argc != 2){
        printf("Error: provide an argument.\n");
        return 1;
    }

    char *str = argv[1];

    if(strcmp(str, "lowercase") && strcmp(str, "uppercase") && strcmp(str, "both")){
        printf("Error: provide a valid argument (eppercase, lowercase, or both).\n");
        return 1;
    }

    while(1){
        putchar('\t');
        char c = getchar();
        if(!strcmp(str, "uppercase")){
            c = toupper(c);
            putchar(c);
        } else if (!strcmp(str, "lowercase")){
            c = tolower(c);
            putchar(c);
        } else if (!strcmp(str, "both")){
            if((c >= 97 && c <= 122)){
                c = toupper(c);
            } else {
                c = tolower(c);
            }
            putchar(c);
        }
    }
}