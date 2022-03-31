#include <stdio.h>
int main() {
int i,n,sum=0;
printf("Enter n ");
scanf("%d",&n);
for(i=1;i<=n;i+=2)
    sum+=i*i;
printf("The sum of n %d",sum);
    return 0;
}