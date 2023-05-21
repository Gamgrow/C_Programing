#include<stdio.h>
#include <stdlib.h>
int main(){

    int n,i,*p;
    printf("Enter number os elements : ");
    scanf("%d",&n);

    p = (int *)calloc(n, sizeof(int));

    if(p==NULL){
        printf("Memoey cannot be allocated\n");
    }else{
        printf("Enter element of array : \n");
        for(int j=0; j<n; j++){
            scanf("%d",p+j);
        }


        printf("Element of array are : ");
        for(int j=0; j<n; j++){
            printf("%d ",*(p+j));
        }
    }

    return 0;
}