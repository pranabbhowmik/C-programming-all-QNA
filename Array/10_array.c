// Write a C program to count total number of negative elements in an array.

#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int size,i,neg;
    int arr[MAX_SIZE];
    //Enter the size of the array
     printf("Enter the size of the array:");
     scanf("%d",&size);
     //Enter the element of the array
     printf("Enter the Element:");
     for ( i = 0; i < size; i++)
     {
        scanf("%d",&arr[i]);
     }
     neg = 0;
     for (int  i = 0; i < size; i++)
     {
       if (arr[i]<0)
       {
        neg ++;
       }
       
     }
     printf("IN the array we find the negitive element %d",neg);
     
 return 0;
}