#include <stdio.h>

int main()
{
    int input, remain=0;
    printf("Enter the amount");
    scanf("%d",&input);
    if(input >1000){
      printf("Thousand amount is=%d\n",input/1000);
      remain= input%1000;
    }
     if(input <=500){
      printf("Thousand amount is=%d\n",input/500);
      remain= input%500;
    }
     if(input <=100){
      printf("Thousand amount is=%d\n",input/100);
      remain= input%100;
    }
     if(input <=50){
      printf("Thousand amount is=%d\n",input/50);
      remain= input%50;
    }
    return 0;
}
