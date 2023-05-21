#include <stdio.h>

int main()
{

    // int arr[] = {1, 2, 3, 4, 5, 6};
    // int sum = 0, *ptr;
    // for (ptr = &arr[0]; ptr <= &arr[5]; ptr++)

    int arr[] = {1, 2, 3, 4, 5, 6};
    int sum = 0, *ptr;
    for (ptr = arr; ptr <= &arr[5]; ptr++)

    {
        sum += *ptr;
    }
    printf("sum = %d", sum);

    return 0;
}