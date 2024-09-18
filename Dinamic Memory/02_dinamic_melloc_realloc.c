#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    
    ptr = (int *) malloc(10 * sizeof(int));

    // Enter the value of the element 
    for (int i = 0; i < 10; i++)
    {
        printf("Element %d:",i);
        scanf("%d",&ptr[i]);
    }
    // print the value of the element 
    for (int i = 0; i < 10; i++)
    {
        printf("The value of the %d element is %d\n",i,ptr[i]);
    }

     ptr = realloc(ptr,6 * sizeof(int));

    // Enter the value of the element 
    for (int i = 0; i < 6; i++)
    {
        printf("Element %d:",i);
        scanf("%d",&ptr[i]);
    }
    // print the value of the element 
    for (int i = 0; i < 6; i++)
    {
        printf("The value of the %d element is %d\n",i,ptr[i]);
    }
    
 return 0;
}