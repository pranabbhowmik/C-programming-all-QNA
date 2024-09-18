#include <stdio.h>
#define MAX_SIZE 100
// Function to print the taking arr
void printarr(int arr[], int size)
{
    printf("Array Element:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
}

// Function to sort the array
void sortarr(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int size;
    int arr[MAX_SIZE];

    // taking size of the array from user
    printf("Enter the size of the array:");
    scanf("%d", &size);
    // tacking Element of the array
    printf("Enter the element of the array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Before shorting array,");
    printarr(arr, size);
    sortarr(arr, size);
    printf("\nAfter sorting array,");
    printarr(arr, size);

    return 0;
}