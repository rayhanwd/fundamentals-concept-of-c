#include <stdio.h>

int main(){
int n,i,num,sum=0,avg,g=0,l=0;
printf("Enter the total count");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("Enter the number of count");
scanf("%d",&num);
sum= sum+num;
}
avg = sum/n;
if(avg > num){
    g = g+1;
}
else if(avg < num){
    l = l+1;
}
printf("avgerage is %d\n",avg);
printf("g is %d\n",g);
printf("l is %d\n",l);
return 0;
}
