// Write a C program to find length of a string.

#include <stdio.h>
#include <string.h>
int main()
{
    char *str;
    printf("Enter any string:");
    scanf("%s", &str);
    int a = strlen(&str);
    printf("Your entring string length is %d", a);

    return 0;
}