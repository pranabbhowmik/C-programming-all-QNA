// Write a C program to copy one string to another string.

#include<stdio.h>
#include<string.h>
int main()
{
    char *str;
    printf("Enter any String:");
    scanf("%s",str);
    char str2[24];
    strcpy(str2,str);
    printf("The str2 string is %s",str2);
 return 0;
}