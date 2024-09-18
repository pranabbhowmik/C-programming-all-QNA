// C program to compare two strings

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[12];
    char s2[20];
    int res;
    printf("Enter the first string:\n");
    scanf("%s",s1);
    printf("Enter the scound string:\n");
    scanf("%s",s2);
    res = strcmp(s1, s2);
    
    if(res == 0)
    {
        printf("Both strings are equal.");
    }
    else if(res < 0)
    {
        printf("First string is lexicographically smaller than second.");
    }
    else
    {
        printf("First string is lexicographically greater than second.");
    }

    return 0;
}