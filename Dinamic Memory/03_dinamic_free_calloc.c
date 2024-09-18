// write a programto demonstrote the use of free mode with calloc.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(10, sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        // input the element
        printf("Enter the element%d:", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("the value of the %d element is %d\n", i, ptr[i]);
    }

    free(ptr);
    return 0;
}