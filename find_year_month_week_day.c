#include<stdio.h>

int main(){
int day;
printf("Enter the value\n");
scanf("%d",&day);

if(day>=365){
    printf("The year of%d\n",day/365);
    day=day%365;
}

if(day>=30){
    printf("The month of%d\n",day/30);
    day=day%30;
}

if(day>=7){
    printf("The week of%d\n",day/7);
    day=day%7;
}

if(day<7){
    printf("The day of%d\n",day);
}
return 0;
}
