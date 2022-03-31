#include<stdio.h>
#include<string.h>
main()
{
    int len1;
    char str1[100], str2[100], str3[100], tempstr1[100];
    printf("Enter First String: ");
    gets(str1);
    len1=strlen(str1);
    printf("\nThe length of the first string is %d", len1);
    strcpy(str2,str1);
    printf("\n first string is %s and copied string is %s \n", str1, str2);
    printf("Enter the string to be compared with first string :");
    gets(str3);
    if(strcmp(str1,str3)==0)
        printf("Both string are equal\n");
    else if (strcmp(str1,str3)<0)
        printf("First string is lesser then second string\n");
    else if (strcmp(str1,str3)>0)
        printf("Firse String is greater than second string \n");
    printf("Enter the string to be concatenated ");
    gets(tempstr1);
    strcat(str1,tempstr1);
    printf("The concatenated string is %s\n", str1);
}
