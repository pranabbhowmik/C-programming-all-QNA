// Program to find maximum occurrence of a character

#include <stdio.h>
#include <string.h>
#define MAX_CHAR 200
int main()
{
    char str[100], count[MAX_CHAR];
    int i, max = 0;
    // Input the string from user
    printf("Enter the string:");
    gets(str);

    // initialize count all character all o
    for (int i = 0; i < MAX_CHAR; i++)
    {
        count[i] = 0; 
    }

    // find frequence of all character
    for (int i = 0; i < strlen(str); i++)
    {
        count[str[i]]++;
    }

    // condition find max frequence
    for (int i = 0; i < MAX_CHAR; i++)
    {
        if (count[i] > count[max])
        {
            max = i;
        }
    }
    printf("%c is max in this strings in %d time", max, count[max]);

    return 0;
}