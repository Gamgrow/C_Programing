#include <stdio.h>
#include<conio.h>

int main()
{
    int length;
    int breadth;
    printf("What is the length of your rectangle : ");
    scanf("%d",&length);

    printf("What is the breadth of your rectngle : ");
    scanf("%d",&breadth);

    int area = length*breadth;

    printf("The area of rectangle is %d",area);
   
    return 0;
}