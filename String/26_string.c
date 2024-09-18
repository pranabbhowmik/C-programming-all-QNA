// Write a C program to replace first occurrence of a character with another in a string.

#include <stdio.h>
#include <string.h>

// condition for replace the character
void replace(char *str, char old, char new)
{
    int i;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == old)
        {
            str[i] = new;
        }
    }
}
int main()
{
    char str[100];
    char new, old;
    // Enter the string from user
    printf("Enter the string:");
    gets(str);
    // Enter the old character
    printf("Enter the old character:");
    scanf("%c", &old);
    fflush(stdin);
    // Enter the new character in new
    printf("Enter the new character:");
    scanf("%c", &new);
    // before the string
    printf("Before we run the string is\n:%s", str);
    // call replace value
    replace(str, old, new);
    printf("\nAfter replacment we find \n:%s", str);
    return 0;
}