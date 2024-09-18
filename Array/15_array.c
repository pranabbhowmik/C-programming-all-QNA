// C program count total duplicate elements in array

#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int count = 0, n, i, size;

    // enter the size
    printf("Enter the size of the array:");
    scanf("%d", &size);
    // enter the element of the array
    printf("Enter the Element of the array:");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // condisition
    for (int i = 0; i < size; i++)
    {
        for (n = i+1; n < size; n++)
        {
            count++;
        }
    }

    printf("\nafter count the element the duplicate is %d time.", count);

    return 0;
}