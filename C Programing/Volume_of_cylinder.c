#include<stdio.h>

int main(){

    printf("Enter radius of cylinder : ");
    float rad;
    scanf("%f",&rad);
    printf("Enter height of cylinder : ");
    float h;
    scanf("%f",&h);

    float pi=3.14;
    float area =pi*(rad*rad)*h;
    printf("The volume of cylinder is %f",area);


    return 0;
}