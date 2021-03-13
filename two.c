#include <stdio.h>
int reorder(char **s1, char **s2, char **s3);
int swap(char **s1, char **s2);
int mystrlen(char *str);

int main(){
    char **slot1;
    char **slot2;
    char **slot3;

    char *str1 = "the quick brown fox";
    char *str2 = "jumped over the";
    char *str3 = "lazy dog";

    slot1 = &str1;
    slot2 = &str2;
    slot3 = &str3;
    printf("BEFORE:\n");
    printf("\t*slot1 = \"%s\"\n", *slot1);
    printf("\t*slot2 = \"%s\"\n", *slot2);
    printf("\t*slot3 = \"%s\"\n", *slot3);

    printf("\nreorder(slot1, slot2, slot3):\n\n");
    reorder(slot1, slot2, slot3);

    printf("\nAFTER:\n");
    printf("\t*slot1 = \"%s\"\n", *slot1);
    printf("\t*slot2 = \"%s\"\n", *slot2);
    printf("\t*slot3 = \"%s\"\n", *slot3);
}

int reorder(char **s1, char **s2, char **s3){
    int len1 = mystrlen(*s1);
    int len2 = mystrlen(*s2);
    int len3 = mystrlen(*s3);

    // If all three are equal lengths
    if(len1 == len2 && len2 == len3){
        printf("All 3 are equal length.\n");
        return 3;
    // Else if any two are equal
    } else if (len1 == len2 || len1 == len3 || len2 == len3){
        printf("Two are equal in length.\n");
        return 2;
    } else {
        // If 1 is the shortest
        if(len1 <= len2 && len1 <= len3){
            // do not swap 1 with anything
            // if 3 is shorter than 2
            if(len3 <= len2){
                swap(s2, s3);
            }
        }
        // else if 2 is the shortest
        else if(len2 <= len1 && len2 <= len3){
            swap(s2, s1);
            // if 3 is shorter than 1
            if(len3 <= len1){
                swap(s2, s3);
            } 
        }
        // else if 3 is the shortest
        else if(len3 <= len2 && len3 <= len1){
            swap(s3, s1);
            // if 1 is shorter than 2
            if(len1 <= len2){
                swap(s2, s3);
            } 
        } else {
            return 0;
        }
        printf("All three are unequal in length.\n");
        return 1;
    }
}

int mystrlen(char *str){
    int i;
    for(i=0; *(str+i) != '\0'; i++);
    return i;
}

// Helper function to swap strings between two slots.
int swap (char **s1, char **s2){
    char *temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}
