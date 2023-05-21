// #include <stdio.h>
// #include <math.h>
#include <stdio.h>
#include <limits.h>

int isstay(int compressed[], int n, int key){
    for(int i=0; i<n; i++){
       if( compressed[i]==key){
        return 1;
       }
    }
    return 0;

}

void main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    int freq[100] = {0};
    
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max =0;

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
        if(max<arr[i]){
            max = arr[i];
        }
    }
    
    int compressed[100]={0};
    compressed[0]=arr[0];
    int j=1;
    for(int i=1; i<n; i++){
        if(isstay(compressed,j,arr[i])==0){
            compressed[j]=arr[i];
            j++;
        }

    }


    for(int i=0; i<j; i++){
       printf("%d:%d\n",compressed[i],freq[compressed[i]]);
    }
}