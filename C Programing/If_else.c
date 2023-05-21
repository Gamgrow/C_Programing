#include <stdio.h>

int main()
{

    int age;
    // if else
    printf("Enter your age : ");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("You can vote\n");
    }
    else
    {
        printf("You can't vote\n");
    }

    return 0;
}