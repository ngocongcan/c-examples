// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int arr[] = {1,2,3,4,5};
    int *pArr = arr;
    
    for(int i =0; i< 5 ; i++) {
        printf("%5d", arr[i]);
    }
    
    printf("\n");
    
    for(int i =0; i< 5 ; i++) {
        printf("%5d", *(pArr + i));
    }
    
    
    return 0;
}