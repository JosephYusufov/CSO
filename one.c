#include <stdio.h>
int countVowels(char *str);
int isVowel(char c);
int mystrlen(char *str);
int mystrncopy(char *s, char *t, int n);

int main(){
    // Note: must be char str[] and not char *str (the latter causes a segfault)
    char str[] = "The quick brown fox jumped over the lazy dog.";
    
    printf("Before: str = \"%s\"\n", str);
    printf("countVowels(str)...\n");
    printf("Vowels: %d\n", countVowels(str));
    printf("After: str = \"%s\"\n", str);

    return 0;
}

int countVowels(char *str){
    // Init index, vowel counter, and cursor
    int i;
    int count;
    char cur;

    for(i=0, count=0, cur=*str; cur != '\0'; i++){
        if(isVowel(cur)){
            // remove the vowel by shifting every character one to the left
            int j;
            for(j=i; *(str+j) != '\0'; j++){
                *(str+j) = *(str+j+1);
            }

            // Decrement I to go over the same position again, in case there 
            // are two vowels in a row.
            i--;
            count++;
        }
        cur = *(str+i+1);
    }
    return count;
}

int isVowel(char c){
    int vowels[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    int i;

    // Iterate over vowels array, return 1 if a match is found.
    for(i=0; i < 10; i++){
        if(c == vowels[i]){
            return 1;
        } 
    }
    return 0;
}

int mystrlen(char *str){
    int i;
    for(i=0; *(str+i) != '\0'; i++);
    return i;
}

int mystrncopy(char *s, char *t, int n){
    int i;
    for(i=0; i < n; i++){
        t[i] = s[i];
    }
    return 1;
}
