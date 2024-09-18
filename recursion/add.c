#include<stdio.h>
int sum(int number){
    if (number==0)
    {
        return 0;
    }
    else{
        return (number + sum(number - 1));
    }
}
    int main()
    {
        int num;
        printf("Enter the number:");
        scanf("%d",&num);
        printf("%d is the sum of %d",num,sum(num));
        return 0;
    }
    
