#include<stdio.h>
#include<string.h>
#define max_str 50
main()
{
    char str[max_str];
    puts("enter a string ");
    gets(str);
    puts("the entier string is:");
    puts(str);

}
Mohammed Akash19:25
#include<stdio.h>
#include<string.h>
#define max_str 50
main()
{
    char str[max_str];
    puts("enter a string ");
    gets(str);
    int n = strlen(str);
    int c = 0;
    for(int i=0; i<n; i++){
        if(str[i] == 'a' || str[i] == 'e' str[i] == 'i' str[i] == 'o' str[i] == 'u'){
            c = c+1;
        }
    }
    printf("%d", c);
}
Md. Saifur Rahman19:29
#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,n,m,d;
    char s[109];
    gets(s);
        n=strlen(s);
        int cnt=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                cnt++;
        }
        printf("%d\n",cnt);
}















