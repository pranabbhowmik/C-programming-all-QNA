#include <stdio.h>
int main()
{
    int arr[5] = {4, 17, 18, 6, 9};
    int *ptr = &arr[0];
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d = %d\n", i + 1, *(ptr + i));
        // ptr++;
    }
    return 0;
}
