#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    // input the number of element from user
    printf("Enter the number of the element:");
    scanf("%d",&n);
    ptr = (int *) malloc(n * sizeof(int));

    // Enter the value of the element 
    for (int i = 0; i < n; i++)
    {
        printf("Element %d:",i);
        scanf("%d",&ptr[i]);
    }
    // print the value of the element 
    for (int i = 0; i < n; i++)
    {
        printf("The value of the %d element is %d\n",i,ptr[i]);
    }
    
 return 0;
}