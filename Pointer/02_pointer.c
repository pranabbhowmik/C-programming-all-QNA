#include<stdio.h>
int main(){
    int a,b,*ptr,*pcr,sum;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the scound number:");
    scanf("%d",&b);
    ptr = &a;
    pcr = &b;
    sum = *ptr + *pcr;
    printf("the sum is %d",sum);
    return 0 ;
}