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

    // for each letter in str
    while(c = *(str++)){
        int e = 0;
        int i = 0;
        char echar = *except; 

        // Return an error if the letter is not 'legal'
        if(!(c >= 97 && c <= 122)){
            printf("Error: illegal string.\n");
            return 1; 
        }

        // check if the letter appears in 'except'
        while(echar != '\0'){
            if(c == echar){
                e = 1;
            }
            i++;
            echar = *(except+i);
        }

        // if the letter DOES NOT appear in except
        if(e == 0){
            int d = 0;
            char dchar = *dup;
            i = 0;

            // check if the letter appears in 'dup'
            while(dchar != '\0'){
                if(c == dchar){
                    d = 1;
                }
                i++;
                dchar = *(dup+i);
            }

            // if the letter appears in dup, print twice. Else, print once.
            if(d){
                putchar(c);
                putchar(c);
            } else {
                putchar(c);
            }
        }
    }
    putchar('\n');
}
