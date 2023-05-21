#include<stdio.h>

int main(){

    int botel,capacity,tank,i;
    scanf("%d%d%d",&botel,&capacity,&tank);
    // int  cnt=0;
    // if(capacity>tank){
    //     printf("%d",0);
    // }else{
    //     for(i=1; i<=botel; i++){
    //      tank -=capacity;
    //      if(tank<0){
    //         break;
    //     }
       
       
    //     cnt++;
    // }
    // printf("%d",cnt);

    // }

        if(botel>=(tank/capacity)){
            printf("%d\n",(tank/capacity));
        }
        else
        {
            printf("%d",botel);
        }
    

    

    return 0;
}