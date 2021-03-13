#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    // main taken from Prof. Gottlieb's Class Notes
    int len, max;
    char line[MAXLINE], longest[MAXLINE];
    max = 0;
    while ((len=getLine(line,MAXLINE))>0)
        if (max < len) {
            max = len;
            copy(longest,line);
        }
    if (max>0)
        printf("%s", longest);
    return 0;
}

int getLine(char s[], int lim) {
    int c, i;
    // Moved for loop conditions into loop 
    // body using if-else statements with
    // breaks.
    for(i = 0; i < lim-1; i++){
        if((c = getchar()) == EOF){
            // i++;
            break;            
        } else if (c == '\n') {
            s[i]= c;
            // ++i;
            break;
        } else {
            s[i] = c;
        }
    }
    return i;
  }

void copy(char to[], char from[]) {
    int i;
    i=0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
