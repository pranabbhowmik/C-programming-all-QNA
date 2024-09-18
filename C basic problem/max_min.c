#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the two number: ");
    scanf("%d%d", &num1, &num2);
    if (num1 > num2)
    {
        printf("%d is the maximum number", num1);
    }
    else if (num1 < num2)
    {
        printf("%d is maximum", num2);
    }
    else if (num1 == num2)
    {
        printf("Both The number is equal");
    }

    return 0;
}