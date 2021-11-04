/* example of pointer malloc */

#include <stdio.h>
#include <stdlib.h>

void printArray() {
    int arr[100];
    for(int i = 0; i< 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i< 5; i++) {
        printf("%d \t", arr[i]);
    }
}

void printPointer() {
    int *p;
    p = (int*) malloc(5 * sizeof(int));
    for(int i = 0; i< 5; i++) {
        scanf("%d", p + i);
    }
    
    for(int i = 0; i< 5; i++) {
        printf("%d \t", *(p + i));
    }
}


int main()
{  
    
    printf("\n ###### Using array #####\n");
    printArray();
    printf("\n ##### Using pointer  #####\n");
    printPointer();
    return 0;
}