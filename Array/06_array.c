#include<stdio.h>
#define MAX_SIZE 100
int main(){
    int arr[MAX_SIZE];
    int N,i;
    printf("Enter the size of the arr: ");
    scanf("%d",&N);
    printf("Enter the element of the arr:");
    for (int i = 0; i < N; i++)
    {
            scanf("%d",&arr[i]);
    }
    printf("\n all negitive element is :");
    for (int i = 0; i < N; i++)
    {
        if (arr[i]<0)
        {
            printf("%d\t",arr[i]);
        }
        
    }
    return 0;
}