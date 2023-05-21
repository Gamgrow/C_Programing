#include <stdio.h>

int main()
{

    // int i = 45;
    // int *ptr = &i;
    // ptr = ptr - 2;
    // printf("%u", ptr);

    // int x;
    // int *ptr = &x;
    // *ptr = 45;

    // printf("%d\n", x);
    // printf("%d\n", *ptr);

    // *ptr += 5;
    // printf("%d\n", x);
    // printf("%d\n", *ptr);

    // (*ptr)++;
    // printf("%d\n", *ptr);

    int age1 = 34;
    int age2 = 67;
    int *ptr1 = &age1;
    int *ptr2 = &age2;
    printf("%d\n", ptr1);
    printf("%d\n", ptr2);
    printf("diffrence %u\n", ptr2 - ptr1);
    printf("compare %u\n", ptr1 == ptr2);

    return 0;
}