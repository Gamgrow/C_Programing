#include <stdio.h>

int main()
{

    int n = 5;
    int nine = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        nine= nine * 10 + 9;
        sum += nine;
    }

    printf("sum of 9999 series  = %d", sum);

    return 0;
}