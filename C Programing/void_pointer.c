#include<stdio.h>

int main(){

    void *vptr;
    int a=56;
    float f =44.5;
    char ch ='d';


    vptr=&a;
    printf("the address of a is : %u\n", *(int*) vptr);

    return 0;
}