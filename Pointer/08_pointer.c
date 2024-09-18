#include<stdio.h>
int* forLarge(int*,int*);
void main(){
    int a,b,result;
    printf("Enter the Number:");
    scanf("%d",&a);
    printf("Enter the secound Number:");
    scanf("%d",&b);
    result = forLarge(&a,&b);
    printf("The number %d is Large",result);
}
int* forLarge(int* n1, int* n2)
{
    if (n1>n2)
    {
      return n1;
    }
    else{
        return n2;
    }
    
}