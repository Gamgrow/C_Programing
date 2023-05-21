#include <stdio.h>
#include <limits.h>

void print(int arr[], int n)
{
    int j=0;
    int secLast = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ",arr[0]);
       
    }
printf("\n");
    while(n>=0){
        if(arr[n-1]!=arr[n-2]){
            secLast=arr[n-2];
            break;
        }
        n--;

    }

    printf(" sec last = %d \n", secLast);
}

int main()
{

    int arr[] = {-7,2,3,8,6,6,75,38,3,2};
    print(arr, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", arr[i]);
    }

    return 0;
}