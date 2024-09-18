// C program to count number of words in a string

#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int i,word;
    printf("Enter the string:");
    gets(str);
     i = 0;
     word = 1;
     for ( i = 0; str[i]!='\0'; i++)
     {
        if (str[i]=='\n'||str[i]=='\t'||str[i]=='  ')
        {
            word++;
        }
        
     }
     printf("The total word is %d",word);
     
 return 0;
}
