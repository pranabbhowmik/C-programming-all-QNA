#include<stdio.h>
int main(){
    int num,first,last,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    // first num 
    first = num;
    // last num
    last = num % 10;
    while (num>=10)
    {
        num = num / 10;
    }
    first = num;
    

    sum = first + last;
    printf("sum of the first and last number is= %d",sum);
    return 0;
}