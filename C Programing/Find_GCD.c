#include<stdio.h>

int main(){

    int num1=12,num2=30;

    int min = num1 <num2 ? num1 : num2;

    int hcf ;
    for(int i=1; i<=min; i++){
        if(num1%i==0 && num2%i==0){
            hcf = i;
        }
    }
    printf("Hcf is = %d",hcf);

    return 0;
}