// C program to count frequency of each character in a string

#include<stdio.h>
#include<string.h>
int main()
{
 char str[100],count[256]={0};
 int i;
//  Enter the string from user 
printf("Enter the strings:");
gets(str);
// lenght magerment
int len = strlen(str);
// find frequence of all character
for (int i = 0; i < len; i++)
{
    count[str[i]]++;
}
//condition
for (int i = 0; i < 256; i++)
{
    if (count[i]>0)
    {
        printf("%c is %d time in this strings\n",i,count[i]);
    }
    
}
 

 return 0;
}