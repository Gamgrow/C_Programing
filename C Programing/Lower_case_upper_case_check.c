#include <stdio.h>

int main()
{
    int chr = 'A';
    int chr2 = 'Z';
    int chr3 = 'a';
    int chr4 = 'z';
    int num1 = '0';
    int num2 = '9';

    char ch;
    printf("Enter any key : ");
    scanf("%c", &ch);
    if ((int)ch >= chr && (int)ch <= chr2)
    {
        printf("Upper case");
    }
    else if ((int)ch >= chr3 && (int)ch <= chr4)
    {
        printf("Lower case");
    }
    else if ((int)ch >= num1 && (int)ch <= num2)
    {
        printf("Integer");
    }
    else
    {
        printf("Special character");
    }

    return 0;
}