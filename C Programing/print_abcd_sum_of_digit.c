
#include <stdio.h>
void main()
{
    int n,rem,sum=0,ksum=0;
    scanf("%d",&n);
    repeat:
    if(n>0){
        rem = n%10;
        sum +=rem;
        n=n/10;
        goto repeat;

    }
   

    if(sum>26){
        repeat2:
        if(sum>0){
            rem = sum%10;
            ksum +=rem;

            sum /=10;
            goto repeat2;

        }
        
        printf("%c",64+ksum);
        

    }else{
        printf("%c",64+sum);
    }
}