#include<stdio.h>
int factorial(int number)
{
    if (number==0 || number==1)
    {
        return 1;
    }
    else{
        return (number * factorial(number - 1));
    }
    
}

int main()
{   int num;
    printf("Enter the you want the factorial:");
    scanf("%d",&num);
    printf("%d factorial is%d\n",num,factorial(num));
    return 0;
}
