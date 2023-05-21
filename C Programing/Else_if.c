#include<stdio.h>

int main(){
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if (age > 18 && age && 150>age)
    {
        printf("adult\n");
    }
    else if (age > 10 && age < 18)
    {
        printf("teenager\n");
    } else{
        printf("Invalid age ");
    }

    return 0;
}