// C program to toggle case of each character in a string

#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int i;
    printf("Enter the string:");
    gets(str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i] - 32;
        }
        else if (str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i] + 32;
        }
        
    }
    printf("The finel string is %s",str);
    
 return 0;
}