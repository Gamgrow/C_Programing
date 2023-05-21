#include <stdio.h>

int main()
{
    int a, b;
    char ch;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter arithmetic operator : ");
    scanf("\n%c", &ch);

    printf("Enter b : ");
    scanf("%d", &b);

    if (ch == '+')
    {
        printf("a + b = %d", a + b);
    }
    else if (ch == '-')
    {
        printf("a - b = %d", a - b);
    }
    else if (ch == '*')
    {
        printf("a x b = %d", a * b);
    }
    else if (ch == '/')
    {
        printf("a / b = %d", a / b);
    }
    else if (ch == '%')
    {
        printf("a %% b = %d", a % b);
    }
    else
    {
        printf("Wrong operator");
    }

    return 0;
}