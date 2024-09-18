#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
     printf("Enter the value of b:");
    scanf("%d",&b);
     printf("Enter the value of c:");
    scanf("%d",&c);

    if ((a+b)>c)
    {
        printf("the triangle is valid");
    }
    else if ((b+c)>a)
    {
        printf("the triangle is not valid");
    }
    else if ((c+a)>b)
    {
        printf("the triangle is not valid");

    }


    return 0;
}