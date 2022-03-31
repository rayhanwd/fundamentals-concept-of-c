#include<stdio.h>
int main(){
int arr[10],count=0,i,j;
printf("Enter the number:");
scanf("%d",&count);
for(i=0;i<count;i++){
    printf("Enter the value of %d array item ",i+1);
    scanf("%d",&arr[i]);
}
    for(j=0;j<count;j++){
        if(arr[i]%2==0){
         printf("List of odd%d\n",arr[i]);
        }
    }
        for(j=0;j<count;j++){
        if(arr[i]%2==1){
         printf("List of even%d\n",arr[i]);
        }
    }
return 0;
}
