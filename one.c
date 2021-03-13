#include <stdio.h>
int countVowels(char *str);
int isVowel(char c);

int main(){
    char *str = "test ThEs Ias";
    printf("%d\n", countVowels(str));
    return 0;
}

int countVowels(char *str){
    printf("%s\n", str);
    int i;
    int count;
    char cur;
    for(i=0, count=0, cur=*str; cur != '\0'; i++){
        if(isVowel(cur)){
            count++;
        }
        cur = *(str+i+1);
    }
    return count;
}

int isVowel(char c){
    int vowels[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    int i;
    for(i=0; i < 10; i++){
        if(c == vowels[i]){
            return 1;
        } 
    }
    return 0;
}