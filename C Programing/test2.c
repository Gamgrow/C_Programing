#include <stdio.h>

int main()
{

    int i = 45;
    int *ptr = &i;
    ptr = &i;
    printf("%d", ptr);

    return 0;
}