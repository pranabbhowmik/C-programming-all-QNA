// C program to find first occurrence of a word in a string

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],search[100];
    int i;
    // Enter the string from user
    printf("Enter the string:");
    gets(str);
    // Enter the search word from user
    printf("Enter the word which you want to search:");
    gets(search);
    // condition
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]==search[0])
        {
            printf("Ther %s word is in %d index",search,i);
        }
        
    }
    
 return 0;
}