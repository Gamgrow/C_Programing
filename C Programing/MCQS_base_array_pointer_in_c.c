#include <stdio.h>

void *findMid(int arr[], int n)
{
    return &arr[n / 2];
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *mid = findMid(arr, n);
    printf("%d", *mid);

    // return 0;

    return 0;
}