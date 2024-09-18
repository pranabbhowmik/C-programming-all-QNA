// Write a C program to count occurrences of a character in given string.

#include<stdio.h>
#include<string.h>
#define MAX 50
int main()
{
    char str[MAX],search;
    int i,count=0;
    // Enter the element of the string
    printf("Enter the string:");
    gets(str);
    // input the search letter from user
    printf("Enter the scarch word:");
    scanf("%c",&search);
    // condition
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]==search)
        {
            count++;
        }
        
    }
    printf("%c character is count %d time",search,count );
    
    return 0;
}