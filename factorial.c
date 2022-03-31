#include <stdio.h>

int main()

{
int num,c;
printf("Enter the number ");
scanf("%d",&num);
c = fact(num);
printf("The factorial number is %d",c);
    return 0;
}
// create a funtion
int fact(int x){
if(x==1) return(1);
else return(x*fact(x-1));
}