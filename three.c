#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]){
    int u = 0;
    int d = 0;
    int i;

    // Do for each command line arg
    for(i=0; i < argc; i++){
        // if this arg starts with a '-'
        if(*(argv[i]) == '-'){
            char c;
            // Loop through the characters of this arg, looking
            // for 'd' and/or 'u'
            while(c = *(argv[i]++)){
                switch(c){
                    case 'u':
                        u = 1;
                        break;
                    case 'd':
                        d = 1;
                        break;
                }
            }
        }
    }

    // Open the 'shell'
    while(1){
        char c = getchar();
        if(u){
            c = toupper(c);
        }

        putchar('\t');
        if(d){
            putchar(c);
            putchar(c);
        } else {
            putchar(c);
        }
    }
}