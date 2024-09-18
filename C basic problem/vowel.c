#include <stdio.h>
int main()
{
    char cha;
    printf("Enter the word:");
    scanf("%c", &cha);

    if (cha == 'a' || cha == 'e' || cha == 'i' || cha == 'o' || cha == 'u' || cha == 'A' || cha == 'E' || cha == 'I' || cha == 'O' || cha == 'U')
    {
        printf("%d is vowel", cha);
    }
    else if (cha >= 'a' && cha <= 'z' || cha >= 'A' && cha <= 'Z')
    {
        printf("%d word is consonant",cha);
    }

    else
    {
        printf("%c not a alphabet",cha);
    }
    return 0;
}