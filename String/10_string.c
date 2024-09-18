// Write a C program to count total number of vowels and consonants in a string.

#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int i;
    int vowel,consonants,len;
    vowel = consonants = 0;

    printf("Enter the string:");
    gets(str);
    len = strlen(str);

        for(i=0; i<len; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            /*
             * If the current character(str[i]) is a vowel
             */
            if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
               str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'  )
                vowel++;
            else
                consonants++;
        }
    }
    
    printf("Vowels is %d\n",vowel);
    printf("Consonants is %d\n",consonants);

 return 0;
}