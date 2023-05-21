#include<stdio.h>

int main(){


    int prices[3];
    printf("Enter items");
    scanf("%d",&prices[0]);
    scanf("%d",&prices[1]);
    scanf("%d",&prices[2]);

    printf("total price 1 = %.2f\n",prices[0]+prices[0]*(0.18));
    printf("total price 2 = %.2f\n",prices[1]+prices[1]*(0.18));
    printf("total price 3 = %.2f\n",prices[2]+prices[2]*(0.18));

    

    return 0;
}