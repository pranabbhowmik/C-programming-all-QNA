//C program to find reverse of array

#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int size,i;
    int arr[MAX_SIZE];
    
    //PRINT ARRAY SIZE
    printf("Enter the size of the array:");
    scanf("%d",&size);

    //Enter the element of the array
    printf("Enter the element of the array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    //print the order
    printf("\nAfter Reverse the array:");
    for (int i = size - 1; i >=0; i--)
    {
        printf("%d\t",arr[i]);
    }
    
 return 0;
}