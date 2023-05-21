#include <stdio.h>

void check(int *n);
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{

    // int a = 5;
    // int b = 6;
    // swap(&a, &b);
    // printf("a = %d\n", a);
    // printf("b = %d\n", b);
    int n;
    check(&n);
    printf("%u\n", &n);

    return 0;
}

void check(int *n)
{
    printf("%u\n", n);
}