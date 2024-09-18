#include <stdio.h>
int main()
{
    int a , b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Sum of %d & %d = %d\n",a,b, a + b);
    printf("Subtraction of %d & %d = %d\n",a,b, a - b);
    printf("Multiplication of %d & %d = %d\n",a,b, a * b);
    printf("Division of %d & %d = %d\n",a,b, a / b);
    return 0;
}
