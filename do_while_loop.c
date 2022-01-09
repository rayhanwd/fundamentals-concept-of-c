#include <stdio.h>
int main(){
int x = 3;

do{
    printf("do this one time%d\n",x);
    x=x+1;
}
while(x < 100);
return 0;
}
