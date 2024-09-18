// Write a C program to remove all repeated characters from a given string.

#include <stdio.h>
#include <string.h>
void remove_repeated_characters(char *str)
{
    int i, j, k;
    int len = strlen(str);
    // condition for removing all  repeated characters from a given string.
    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                for (int k = j; k < len; k++)
                {
                    str[k] = str[k + 1];
                }
                len--;
                j--;
            }
        }
    }
}
int main()
{
    char str[100];
    printf("Entet the string:");
    gets(str);
    remove_repeated_characters(str);
    printf("After the removing all repeated character we find=%s", str);
    return 0;
}