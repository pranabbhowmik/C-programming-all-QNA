#include<stdio.h>
int main()
{
    printf("The first 10 natural number is:");
    int i,sum=0;
    for ( i = 0; i <= 10; i++)
    {
        sum = sum + i;
        printf(" %d",i);
    }
    printf("The sum is %d",sum);

    return 0;
}
