#include <stdio.h>

int main()
{

    int a, b;
    a, b = 2, 3;
    printf("a | b = %d\n", a | b); // or
    printf("a & b = %d\n", a & b); // and
    printf("a ^ b = %d\n", a ^ b); // xor
    printf("a >> b = %d\n", a >> b); // right shift
    printf("a << b = %d\n", a << b); // left shift
    printf("a << b = %d\n", ~a);   //complement
    printf("a << b = %d\n", ~b); // complement

    return 0;
}