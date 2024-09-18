
// Write a C program to find maximum and minimum element in an array.

#include<stdio.h>
#define MAX_SIZE 100
int main()
{
 int max,min,size,i;
 int arr[MAX_SIZE];

 //enter the size of the array
 printf("Enter the size of the array:");
 scanf("%d",&size);

 //enter the element of the array
printf("Enter the element of the array:");
for (int  i = 0; i < size; i++)
{
    scanf("%d",&arr[i]);
}
max = arr[0];
min = arr[0];
//condisation the main
// printf("\n Choose the currect maximum and minimum number:");
for (int  i = 0; i < size; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
    else if (arr[i] < min)
    {
        min = arr[i];
    }
    
    
}
//print the return value
printf("The maximum number is %d\n",max);
printf("The minimum number is %d\n",min);

 return 0;
}