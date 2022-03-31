#include <stdio.h>

int main()
{
   int i,j,arr[3][5],sum=0;
   for(i=0;i<3;i++)
   for(j=0;j<5;j++)
  {
   scanf("%d",&arr[i][j]);
   sum = sum + arr[i][j];
  }
  printf("sum is %d",sum);
    return 0;
}
