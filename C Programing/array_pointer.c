#include <stdio.h>

int main()
{

    int arr[] = {2, 4, 6, 8, 9};
    int *ptr = &arr[2];
    printf("%d\n", *(--ptr));


    return 0;
}