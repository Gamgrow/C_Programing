#include <stdio.h>
int main()
{

    int n;
    printf("enter a number: ");
    scanf("%d", &n);


    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){

            if(j>=i){
                printf("%d ", n-i+1);
            }
            else{
              printf("%d ", n-j+1);
            }
        }
        for(int j=1;j<n;j++){
            if(j<n-i){
                printf("%d ",n-i+1);
            }
            else{
                printf("%d ",j+1);
            }
        }
        printf("\n");
    }
for(int i=1; i<n; i++){
    for(int j=1; j<=n; j++){
        if(j<=n-i-1){
           printf("%d ",n-j+1);
        }
        else{
            printf("%d ",i+1);
        }
    }
    for(int j=1;j<n; j++){
        if(j<=i){
            printf("%d ",i+1);
        }
      else{
        printf("%d ",j+1);
      }

    }
    printf("\n");
}

return 0;
}