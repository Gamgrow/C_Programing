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

for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
        if(arr[i]<arr[j]){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            
        }
    }
}
for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
}


    return 0;
}