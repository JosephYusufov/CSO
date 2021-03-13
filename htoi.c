#include <stdio.h>
#include <string.h>
#include <math.h> 

int htoi(char s[]) {
    int i, n, len, offset = 0;
    len = strlen(s);

    if(s[1] == 'x'){
        i = 2;
        offset = 2;
    } else {
        i = 0;
    }
    
    for (; s[i] != '\0'; i++){
        int c;
        int power;
        int temp;
        power = len-offset-i-1;
        if(s[i] >= 'A' && s[i] <= 'F'){
            c = (s[i] - 'A') + 10;
        } else if (s[i] >= 'a' && s[i] <= 'f'){
            c = (s[i] - 'a') + 10;
        } else if (s[i] >= '0' && s[i] <= '9'){
            c = s[i] - '0';
        } else {
        }

        printf("Constant : %d\n", c);
        printf("Power    : %d\n", power);
        // printf("Power of 16: %d\n", );

        temp = (int) ((pow(16, power)) * c);
        printf("Temp     : %d\n", temp);
        n = n + temp;
        // n = n + (((int) (pow(16, power))) * c);
    }
    printf("N: %d\n", n);
    return n;
}

int main() {
    int val;
    char hex[] = "5C";
    val = htoi(hex);
    // printf("Val: %d\n", val);
}