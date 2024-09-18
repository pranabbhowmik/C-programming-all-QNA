// C program to count frequency of each element in an array.

#include <stdio.h>
int main()
{
    int i, fre = 0, n, size;
    int arr[100];

    // print the size of the array
    printf("Enter the size of the array:");
    scanf("%d", &size);

    // enter the element of the array
    printf("Enter the Element of the array:");
    for (i = 0; i <size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // eter the number you can check the frequency
    printf("\nEnter the number:\n");
    scanf("%d", &n);
    // condition
    for (int i = 0; i <size ; i++)
    {
        if (arr[i] == n)
        {
            fre++;
        }
    }
    printf("\nThe frequency of the %d number is %d\n", n, fre);

    return 0;
}