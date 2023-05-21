#include<stdio.h>

int main(){

    int marks[3];
    printf("Enter marks  : ");
    scanf("%d",&marks[0]);
    scanf("%d",&marks[1]);
    scanf("%d",&marks[2]);

    for(int i=0; i<3; i++){
        printf("%d ",marks[i]);
    }

    return 0;
}