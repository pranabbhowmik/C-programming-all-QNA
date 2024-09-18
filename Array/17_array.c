// C program to merge two sorted array
#include<stdio.h>
#define MAX_SIZE 100
int main()
{
  int arr1[MAX_SIZE], arr2[MAX_SIZE], mergeArray[MAX_SIZE * 2];
    int size1, size2, mergeSize;
    int index1, index2, mergeIndex;
    int i;
     
    //  Enter the first array size
    printf("Enter the first size of the array: ");
    scanf("%d",&size1);
    //Enter the element of the first array
    printf("Enter the first element of the array:");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    //  Enter secound array size
    printf("Enter the scound array size:");
    scanf("%d",&size2);
    // Enter the Element of the scound array
    printf("ENter the element of the array:");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    mergeSize = size1 + size2;
    index1 = 0;
    index2 = 0;
    for ( mergeIndex = 0; mergeIndex < mergeSize; mergeIndex++)
    {
      
        
    }
    
    
    
 return 0;
}
