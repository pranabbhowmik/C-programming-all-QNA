//Write a C program to find sum of all array elements.

#include<stdio.h>
#define MAX_SIZE 100
int main()
{
 int sum = 0,n,i;
 int arr[MAX_SIZE];
 // the size of the array

 printf("Enter the size of an array:");
 scanf("%d",&n);

//the element of the array
printf("Enter the element of the array:");
for (int  i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
for (int i = 0; i < n; i++)
{
    sum = sum + arr[i];
}
printf("The sum of the arr are %d",sum);

 return 0;
}