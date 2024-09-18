// C program to put even and odd elements of array in two separate array
#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int i,even,odd,size;
    int arr[MAX_SIZE];
    //Enter the size of array
    printf("Enter the size of the array:");
    scanf("%d",&size);
    //Enter the Element of the array
    printf("Enter the Element of the array:");
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    even = 0;
    odd = 0;
    //condation
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
        
    }
    printf("\nAfter choose the even numnber is %d\n",even);
    printf("\nthe odd number is %d\n",odd);

    
 return 0;
}