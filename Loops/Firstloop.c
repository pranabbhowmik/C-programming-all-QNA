#include <stdio.h>
#include <conio.h>
int main()
{
    int i, end;
    printf("Enter the number:");
    scanf("%d", &end);
    for (i = 1; i < end; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}