#include <stdio.h>

int main()
{
    // ternary operator
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    char sotre;
    sotre = (age > 18) ? 'y' : 'n';
    printf("%c", sotre);
}