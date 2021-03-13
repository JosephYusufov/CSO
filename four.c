#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n);

int main(int argc, char *argv[]){
    if(argc != 3){
        printf("Error: provide a range in the form of two numbers.\n");
        return 1;
    } 
    int arg1 = atoi(argv[1]);
    int arg2 = atoi(argv[2]);
    
    if(arg1 > arg2){
        printf("Error: the first number cannot be larger than the second number.\n");
        return 1;
    }

    int i;
    for(i=arg1; i <= arg2; i++){
        printf("%d: %s\n", i, isPrime(i)? "prime": "not prime");
    }
}

int isPrime(int n){
    int i;
    for(i=2; i < n; i++){
        if((n % i) == 0){
            return 0;
        }
    }
    return 1;
}