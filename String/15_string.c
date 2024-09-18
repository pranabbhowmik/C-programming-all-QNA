// Find the a string  Last occurance in c
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10], tofind;
    int i;
    printf("Enter the string:");
    gets(str);
    printf("Enter the word you want to know the position:");
    scanf("%c", &tofind);
    for (int i = 10; i >= 0; i--)
    {
        if (str[i] == tofind)
        {
            printf("%c word position is %d", tofind, i);
        }
    }

    return 0;
}