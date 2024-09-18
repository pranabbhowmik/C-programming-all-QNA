#include <stdio.h>
int main()
{
    int arr[6] = {2,4, 17, 18, 6, 9};
    int *ptr = &arr[0];
    for (int i = 0; i < 6; i++)
    {
        printf("Element %d = %d\n", i , *(ptr + i));
        // ptr++;
    }
    return 0;
}
