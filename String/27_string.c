// C program to remove all occurrences of a character from string

#include<stdio.h>
#include<string.h>
void removeAll(char *str,char newchar){
    int i,j;
    int len=strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i]==newchar)
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
    char newchar;
    // Enter the string from user
    printf("Enter the String:");
    gets(str);
    // Enter the new character
    printf("Enter the New character:");
    scanf("%c",&newchar);
    // Before remove the all string
    printf("Before removing all character:%s\n",str);
    removeAll(str,newchar);
    printf("String after removing '%c': %s", newchar, str);
    return 0;
}