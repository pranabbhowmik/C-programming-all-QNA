// C program to delete element from an array

#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int size, i, pos;
    int arr[MAX_SIZE];

    // PRINT THE SIZE OF THE ARRAY
    printf("Enter the size:");
    scanf("%d", &size);
    // print the element of the array
    printf("Enter the element of the array:");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // enter the position
    printf("\nEnter the position of the element:\n");
    scanf("%d", &pos);

    //condisation
    if (pos >= (size + 1))
    {
        printf(" Please Enter the valid position");
    }
    else
    {
        for (i = pos - 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;

        // after Deleting the element 
        
        printf("\nAfter Deleting the element we find that:\n");
        for (i = 0; i < size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}