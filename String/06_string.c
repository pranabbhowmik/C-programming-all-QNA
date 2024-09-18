// Write a C program to convert uppercase string to lowercase.

 
#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int i;
    char str[MAX_SIZE];
    printf("Enter the string:");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("The Upper case is %s", str);

    return 0;
}
