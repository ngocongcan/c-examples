/* example of pointer as parameter */

#include <stdio.h>
// parameter as reference value
void square(int *x)
{   
    *x = (*x)*(*x);
}

// parameter as reference value
int square_2(const int *x)
{   
    return (*x)*(*x);
}

int main()
{  
    
    int x = 5;
    square(&x);
    printf("x = %d", x);
    printf("\n");
    printf("square of x = %d", square_2(&x));
    printf("\n");
    printf("x = %d", x);
    return 0;
}