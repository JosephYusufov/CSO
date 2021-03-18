#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *bigCat(char *str, int cnt);
int mystrlen(char *str);

int main(){
    char *result = bigCat("asdf", 2);
    printf("input:  (%s, 2)\n", "asdf");
    printf("result: %s\n", result);
}

char *bigCat(char *str, int cnt){
    int strlen = mystrlen(str);
    int newlen = mystrlen(str) * cnt + 1;
    char newstr[newlen];
    int i;
    for(i=0; i < cnt; i++){
        int j;
        for(int j = 0; j < strlen; j++){
            newstr[j + i*strlen] = str[j];
        }
    }
    newstr[newlen-1] = '\0';
    char *toreturn = newstr;
    return toreturn;
}

int mystrlen(char *str){
    int i;
    for(i=0; *(str+i) != '\0'; i++);
    return i;
}