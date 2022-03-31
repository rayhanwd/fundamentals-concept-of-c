#include<stdio.h>
#include<string.h>
#define max_str 50
main()
{
    char str[max_str];
    puts("enter a string ");

    gets(str);
    int stln = strlen(str);

    for (int i=0; i<stln; i++){
        char c = str[i];
        if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            continue;
        }else{
            printf("%c", c);
        }
    }
}
