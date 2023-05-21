#include <stdio.h>

// call by reference
// use %p formate  specifier for pointer print address

int swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t; 
}
int main()
{

    int a = 78;
    int b = 44;

    swap(&a,&b);
    printf("a=%d\nb=%d",a,b);

    return 0;
}
