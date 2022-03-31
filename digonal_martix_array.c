#include<stdio.h>

int main(){
    int arr[3][3], sum=0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Enter value for [%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter value for diagonal items are..");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==j){
                printf("[%d][%d] = %d ", i, j, arr[i][j]);
            }
        }
    }
}
