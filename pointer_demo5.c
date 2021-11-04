/* file pointer_demo5.c */
#include <stdio.h>

int T (int * p, int*q)
{   int t= (*p) + (*q) > 12 ? 5:6;
    return 2*t%5;
}

int main()
{  
    int a=3, b=4, c;
    c= T(&a,&b);
    
    printf("C = %5d", c);
    return 0;
   
}