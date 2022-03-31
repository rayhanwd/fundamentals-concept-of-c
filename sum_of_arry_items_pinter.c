#include <stdio.h>
int main()
{
    int n,i,j,a[109],*p,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    p=a;
    for(j=0;j<n;j++){
        sum=sum + *p;
        p++;
    }
    }
     printf("Sum is %d",sum);
    
    return 0;
}