#include <stdio.h>
#include <stdlib.h>
// #include <math.h>
#include <stdbool.h>

bool isprime(int n){
    int c = 0;
    for(int i = 1; i <= n; i++){ // replace with sqrn(n)
        if(n % 1 == 0){
            c += 1;
        }
    }
    if(c > 2){
        return false;
    } else {
        return true;
    }
}

void main(){
    int n = 56;
    bool v = isprime(n);
    if(v){
        printf("%d: prime\n", n);
    } else {
        printf("%d: NOT prime\n", n);
    }
}