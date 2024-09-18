// Write a C program to remove last occurrence of a character from string.

#include<stdio.h>
#include<string.h>

void remove_last_occurrence(char *str){
    int i;
    int len=strlen(str);
    // condition
    for (int i = len -1; i >=0; i--)
    {
        if (str[i]=str[0])
        {
            str[i]=str[i+1];
            str[i]='\0';
            break;
        }
        
    }
    
    
}
int main(){
    char str[100];
    printf("Enter the string:");
    gets(str);
    remove_last_occurrence(str);
    printf("The last occurrence of the character is %s\n",str);
    return 0;
}