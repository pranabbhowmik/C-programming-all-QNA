// write a c programming to multiplay two number after taking the input from the user.
/*
#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    c= a * b;
    printf("the result in = %d", c);
    return 0;
}
*/
// write a 'c' programme to calculate the interest of a principal amount.
/*
#include<stdio.h>
#define interest 0.07
int main (){
    int principal;
    float time;
    float result;
    printf("enter the principal amount: ");
    scanf("%d",&principal);
    printf("enter the time: ");
    scanf("%f",&time);
    result=principal*time*interest;
    printf("the total amount is=%f",result);
    return 0;
}
*/

// wite a 'c'  programme to  display the following.

#include<stdio.h>
int main()
{
    int row;
    int col;
    int i,j;
    for(i=1; i<=5; i++);
    {
        for(i=1; j<=i; i+1);
        printf("*");
    }
    printf("\n");
}