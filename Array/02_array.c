#include<stdio.h>
int main(){
    int element[10];
        printf("Enter the element:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&element[i]);
    }
    for (int  i = 1; i < 10; i++)
    {
        printf("Element%d=%d\n",i,element[i]);
    }
    

    return 0;
}