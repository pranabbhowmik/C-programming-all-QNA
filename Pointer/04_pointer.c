#include<stdio.h>
void main(){
    int a,b,*ptr,*prc;
    ptr = &a;
    prc = &b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the scound number:");
    scanf("%d",&b);
    if (*ptr>*prc)
    {
        printf("%d is the higher then %d",*ptr,*prc);
    }
    else{
        printf("%d is the lower than %d",a,b);
    }
}