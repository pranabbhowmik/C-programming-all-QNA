// Write a C program to copy all elements from an array to another array.

#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int size, i;
    int sorce[MAX_SIZE], copy[MAX_SIZE];

    // Enter the size of the array
    printf("Enter the size of the array:");
    scanf("%d", &size);

    // Enter the Element of the array
    printf("Enter the Element:");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &sorce[i]);
    }

    // Copy the element in copy array
    for (i = 0; i < size; i++)
    {
       copy[i] = sorce[i];
    }
    // print the sorce Element
    printf("\nthe sorce element are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", sorce[i]);
    }
    // After copy the element print the copy array
    printf("\nThe copy element are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", copy[i]);
    }

    return 0;
}