#include<stdio.h>

int main(){

    int aadhar[5];
    // input
    // int *ptr  = aadhar;
    int *ptr = &aadhar[0];
    for(int i=0; i<5; i++){
        printf("Enter index %d : ",i);
        scanf("%d",(ptr+i));
    }

    // output
    for(int i=0; i<5; i++){
        printf("%d ",*(ptr+i));
    }

    return 0;
}