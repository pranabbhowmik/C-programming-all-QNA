// Write a C program to concatenate two strings.

#include <stdio.h>
#include <string.h>
int main()
{
    char *str1;
    char str2[20];
    printf("Enter the first string:\n");
    scanf("%s", str1);
    printf("Enter the scound string:\n");
    scanf("%s", str2);
    int val = strcat(str1, str2);
    printf("The total string is %s", str1);
    return 0;
}