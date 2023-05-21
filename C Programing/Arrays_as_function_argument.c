// #include<stdio.h>

// void printNumbers(int arr[], int n);
// int main(){

//      int arr[]={1,2,3,4,5,6};
//      printNumbers(arr,6);

//     return 0;
// }

// void printNumbers(int arr[], int n){
//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i]);
//     }
// }

#include <stdio.h>

void printNumbers(int arr[], int n);
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    printNumbers(arr, 6);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void printNumbers(int arr[], int n)
{
    arr[0] = 45;
    arr[1] = 990;
    arr[2] = 23;
    arr[3] = 2;
    arr[4] = 33;
    arr[5] = 93;
}