#include<stdio.h>
void numTofact(int, int*);
int main(){
    int num1,fact;
    printf("Enter the number :");
    scanf("%d",&num1);
    numTofact(num1,&fact);
    printf("The Fectorial %d is %d",num1,fact);
    return 0;
}
void numTofact(int n, int*f)
{
    int i;
    *f=1;
    for (int i = 1; i < n; i++)
    {
        *f = *f * i;
    }
    
}