// Online C compiler to run C program online
#include <stdio.h>
int main(){
int size;
printf("Enter size of array : ");

scanf("%d",&size);

int arr[size];
int n=size;
for(int i=0; i<size; i++){
    scanf("%d",&arr[i]);
}
int deletenum;
scanf("%d",&deletenum);
int pos = deletenum-1;
int s=0, k =1;
for(int i=0; i<(n-pos); i++){
    arr[pos+s] = arr[pos+k];
    s++;
    k++;
}

for(int i=0; i<n-1; i++){
    printf("%d ",arr[i]);
    
    
}

    return 0;
}