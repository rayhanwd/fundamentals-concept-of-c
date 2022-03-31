#include <stdio.h>

int main()
{
    int i, n, x[10], a, even, odd;

    printf("How Many Bits: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
        if(x[i]>=1)
            odd = odd + 1;
        else
            even = even +1;
    }
    if (even>odd)
        printf("0");
    else
        printf("1");
    for(i=0;i<n;i++)
    printf("%d", x[i]);
}
