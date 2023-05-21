#include <stdio.h>

// call by value

int swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf("a=%d\nb=%d", a, b);
}
int main()
{

    int a = 5;
    int b = 8;

    swap(a, b);

    // printf("a=%d\nb=%d", a, b);

    return 0;
}
