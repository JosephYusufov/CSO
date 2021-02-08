#include <stdio.h>

void pointers(int n){
    int *pn = &n;
    printf("n = %d\n", n);
    printf("pn = %p\n", (int*)pn);
}

void loops(int n){
    for(int i = 0; i < n; i++){
        printf("%d\n", i);
    }
    printf("Loop Ended\n");
}

void array(int n){
    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = i * 2;
    }
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
}