#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int cnt =0;
    for(int i=0; i<n; i++){
        cnt =0;
        for(int j=0; j<n; j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                    cnt++;
                }
            }
        }
        if(cnt==0){
            printf("%d ",arr[i]);
        }
    }

    return 0;
}