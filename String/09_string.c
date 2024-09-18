// Write a C program to find total number of alphabets, digits or special character in a string.

#include<stdio.h>
#define SIZE 100
int main()
{
    char str[SIZE];
    int alphabet,digits,special,i;
    alphabet=digits=special=i=0;
    printf("Enter the strings:");
    gets(str);
    
    while (str[i]!='\0')
    {
         if (str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
        {
            alphabet++;
        }
        else if (str[i]>='0'&&str[i]<='9')
        {
            digits++;
        }
        else{
            special++;
        }
     i++;   
    }
    
    printf("The alphAbets %d\n",alphabet);
    printf("The Digits %d\n",digits);
    printf("The special %d\n",special);
 return 0;
}