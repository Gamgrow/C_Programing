#include <stdio.h>

int isOdd(int n)
{
    if ((n&1) == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int decimalToBinary(int n){
    
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (isOdd(n))
    {
        printf("Even");
    }
    else
    {
        printf("odd");
    }

    return 0;
}