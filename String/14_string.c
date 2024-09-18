// C program to find the first occurrence of a character in a string

#include <stdio.h>
int main()
{
    char str[15], search;
    int i;
    //  Enter the string
    printf("Enter your string:");
    gets(str);
    printf("Enter the word you want to find the position:");
    scanf("%c", &search);
    for (int i = 0; i <=sizeof(str); i++)
    {
        if (str[i] == search)
        {
            printf("%c word position is %d\n", search, i);
            break;
        }
    }

    return 0;
}