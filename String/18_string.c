#include<stdio.h>
int main()
{
    char str[10],search;
    int i,temp;
    printf("Enter the string:");
    gets(str);
    printf("Enter the word:");
    scanf("%c",&search);
    for ( i = 0; str[i]!='\0'; i++)
    {
        if (str[i]==search)
        {
            temp++;
        }
        
    }
    
    printf("The %c is %d time",search,temp);

 return 0;
}