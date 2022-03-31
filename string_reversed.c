#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enter a string to reserved ");
    scanf("%s",str);
    printf("After reversed string is %s",strrev(str));
    return 0;
}