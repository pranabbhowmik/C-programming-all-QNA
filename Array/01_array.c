// sorted array


#include <stdio.h>

// Function to print the array
void printArray(int arr[], int size)
{
    printf("Array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d     ", arr[i]);
    }
}

//Function to sort the array
void sortArray(int arr[], int size)
{
    int temp;
    for (int i=0; i<size-1; i++)
    {
        for (int j=i+1; j<size; j++)
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
    int arr[7];

    // taking array elements as input
    for (int i = 0; i < 7; i++)
    {
        printf("Element%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Before sorting, ");
    printArray(arr, 7);
    sortArray(arr, 7);
    printf("\nAfter sorting, ");
    printArray(arr, 7);
    return 0;
}
