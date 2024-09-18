#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);
    if (num % 2 == 0)
    {
        printf("the is even");
    }
    else
    {
        printf("the number is odd");
    }
    return 0;
}