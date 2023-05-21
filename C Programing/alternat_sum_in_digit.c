// #include <stdio.h>
// #include <math.h>
#include <stdio.h>
#include <limits.h>
void main()
{

    int n;
    scanf("%d", &n);
    int cnt=0;
    int rev =0;
    while(n>0){
        int ld = n%10;
        rev = rev*10+ld;
        cnt++;
        n = n/10;

    }
    int arr[cnt];

    for(int i=0; i<cnt; i++){
        int ld = rev%10;
        
        arr[i] = ld;
        rev = rev/10;
    }

    int sum1=0,sum2=0;

    for(int i=0,j=1; i<cnt; i=i+2,j=j+2){
        sum1 = sum1+arr[i];
        if(j<cnt){
            sum2 +=arr[j];
        }

    }

    int ans = sum1-sum2;
    printf("%d",ans);

    
}