#include <stdio.h>
int main(){
    int i,num;
    printf("Enter the number :");
    scanf("%d",&num);
    for ( int  i = 10; i; i--)
    {
        printf("Tne multiple table is %d x %d = %d\n",i,num, num * i);
    }
    return 0;
}