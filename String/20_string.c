// Program to find minimum occurrence of a character

#include<stdio.h>
#include<string.h>
#define MIN_CHAR 200
int main()
{
    char str[100],count[MIN_CHAR];
    int i,min=0;
    // Enter the string
    printf("Enter the striing:");
    gets(str);
    // / initialize count all character all o 
    for (int i = 0; i < MIN_CHAR; i++)
    {
        count[i]=0;
    }
    // count all fequence of the character
    for (int i = 0; i < strlen(str); i++)
    {
        count[str[i]]++;
    }
    // condition
    for (int i = 0; i < MIN_CHAR; i++)
    {
        if (count[i]!='\0' || count[i]<count[min])
        {
            min=i;
        }
        
    }
    
    printf("%C character is minimum %d time",min,count[min]);
    
    
 return 0;
}