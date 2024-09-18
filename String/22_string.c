// C program to remove first occurrence of a character from string

#include<stdio.h>
#include<string.h>
void remove_first_occurrence(char *str) {
    int i,j;
    int len= strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i]==str[0])
        {
            for ( j = i; j < len; j++)
            {
                str[j]=str[j+1];
            }
        break; 
        }
        
    }
    
}
int main()
{
    char str[100];
   
    printf("Enter a string: ");
    gets(str);

    remove_first_occurrence(str);

    printf("String after removing the first occurrence of character is : %s\n", str);
}