#include<stdio.h>

int main(){

    int matrix1[3][3] = {{1,2,3},
                         {1,2,1},
                         {3,1,2}};
    int matrix2[3][3] = {{1,2,3},
                         {1,2,1},
                         {3,1,2}};

    int arr[3][3];
    int sum=0;
    int k=0;
    for(int i=0; i<3; i++){
        
        for(int j=0; j<3; j++){
            sum = 0;
            for(int k=0; k<3; k++){
                sum += matrix1[i][k]*matrix2[k][j];

            }
            arr[i][j]=sum;
            
        }
        
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}