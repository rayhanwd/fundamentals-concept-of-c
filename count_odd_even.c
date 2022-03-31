#include<stdio.h>

int main(){
    int x,odd_count=0,even_count=0,length;
    printf("Enter your count length = ");
    scanf("%d",&length);
    
    for(x=1;x<=length;x++){
        if(x%2==0) even_count+=1;
        else odd_count+=1;
    }
    printf("The total odd is: %d\n",odd_count);
    printf("The total even is: %d",even_count);
    
    return 0;
}