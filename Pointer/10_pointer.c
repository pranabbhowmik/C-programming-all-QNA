#include <stdio.h>
int main()
{
    char str1[20];
    char *pt;
    int v, c;
    printf("pleash enter any strings:");
    gets(str1);
    pt = str1;
    v = c = 0;
    while (*pt != '\0')
    {
        if (*pt == 'A' || *pt == 'E' || *pt == 'I' || *pt == 'O' || *pt == 'U' || *pt == 'a' || *pt == 'e' || *pt == 'i' || *pt == 'o' || *pt == 'u')

            v++;
        else
            c++;
        pt++;
    }
    printf("\n Number of vowel %d \n and Number of consonent is %d\n", v, c);
    return 0;
}