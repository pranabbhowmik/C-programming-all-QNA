// C program to search all occurrences of a character in a string
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE], search;
    int i;
    printf("Enter the string:");
    gets(str);
    printf("Enter the search variable:");
    scanf("%c", &search);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == search)
        {
            printf("%c found in %d index", search, i);
        }
    }

    return 0;
}