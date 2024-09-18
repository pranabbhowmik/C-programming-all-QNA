// Write a C program to remove all occurrences of a character from string.

#include<stdio.h>
#include<string.h>
void remove_all_occaurences(char*str,char ch){
    int i,j;
    int len=strlen(str);
    // condition of removing all occurrence of a character
    for (int i = 0; i < len; i++)
    {
        if (str[i]==ch)
        {
            for (int j = i; j < len; j++)
            {
                str[j]=str[j+1];
            }
            len--;
            i--;
            
        }
        
    }
    
}
int main(){
    char str[100];
    char ch;
    // Enter the element from user
    printf("Enter the string:");
    gets(str);
    // Enter the character from character
    printf("Enter the character:");
    scanf("%c",&ch);
    remove_all_occaurences(str,ch);
    printf("after the character revoming we found:%s",str);
    return 0;
}