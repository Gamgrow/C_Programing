#include<stdio.h>

int main(){

    int i;
    printf("Enter a number between 0 to 7  : ");
    scanf("%d",&i);

    switch(i){
        case 1 : printf("Sunday");
        break;
        case 2 : printf("Monday");
        break;
        case 3 : printf("Tuesday");
        break;
        case 4 : printf("Wednesday");
        break;
        case 5 : printf("Thursday");
        break;
        case 6 : printf("Saturday");
        break;
        default :
        printf("Invalid number");

    }

    return 0;
}