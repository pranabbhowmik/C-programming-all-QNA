// Write a C program to declear the even or odd elements from this array. 

#include <stdio.h>
#define MAX_SIZE 100 // Maximum array size

int main()
{
    int arr[MAX_SIZE]; // Declare an array of MAX_SIZE
    int i, size,even,odd;

    /* Input array size */
    printf("Enter size of array: ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in the array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    even = 0;
    odd = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2==0)
        {
            even ++;
        }
        else 
        {
            odd ++;
        }
        
        
    }
    printf("The even number is : %d\n",even);
    printf("The odd number is: %d\n",odd);
    return 0;
}

