#include <stdio.h>
void swapNumbers(int *x, int *y);
int main()
{
    int e1, e2;
    printf("Enter the numbe:");
    scanf("%d", &e1);
    printf("Enter the scound number:");
    scanf("%d", &e2);
    printf("\n The value before swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n", e1, e2);
    swapNumbers(&e1, &e2);
    printf("\nThe value after swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n", e1, e2);
    return 0;
}
void swapNumbers(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}