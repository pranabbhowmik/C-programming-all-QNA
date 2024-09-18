// #include <stdio.h>
// #include <string.h>
// #define MAX_SIZE 100

// int main()
// {
//     char str[MAX_SIZE];
//     char reverce[MAX_SIZE];
//     int count;
//     printf("Enter the word:");
//     gets(str);
//     strcpy(reverce, str);
//     strrev(reverce);
//     count = strcmp(str, reverce);
//     if (count == 0)
//     {
//         printf("This word is Palintrom");
//     }
//     else
//     {
//         printf("This word is not a palintrom word");
//     }
//     return 0;
// }

#include<stdio.h>
int isPalindrome(char str[])
{
    int len = 0, i = 0;
    while (str[i++] != '\0')
    {
        len++;
    }
    int high = len-1, low = 0;
    while (low <= high)
    {
        if (str[low] != str[high])
        {
            return 0;
        }
        low++;
        high--;
    }
    return 1;
}
int main()
{
    if (isPalindrome("level") == 1)
    {
        printf("yes");
    }
    return 0;
}