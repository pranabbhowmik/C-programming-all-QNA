#include <stdio.h>
int main()
{
    char ch;
    printf("Enter your choose:");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is your alaphabet", ch);
    }

    else if (ch >= '0' || ch <= '9')
    {
        printf("%c is the digit", ch);
    }

    else
    {
        printf("%c is the special number", ch);
    }
    return 0;
}