#include <stdio.h>

int main()
{

    printf("Enter an integer number : ");
    int num;
    scanf("%d", &num);
    if (num <= 0)
    {

        printf("Number is : %d", num);
        goto end; // go end

    end:
        printf("\nBye bye !!");
        return 0;
    }

    return 0;
}