#include <stdio.h>

int main()
{
    int a = 5;
    int *ptr = &a;
    ptr++;
    printf("%u", ptr);

    return 0;
}
