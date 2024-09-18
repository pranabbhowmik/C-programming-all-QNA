#include<stdio.h>
int main()
{
    int num,first;
    printf("Enter the numbers:");
    scanf("%d",&num);
    first = num;
    while (first>=10)
    {
        first = first / 10;
    }
    printf("the first number is= %d",first);
    return 0;
}
    
    