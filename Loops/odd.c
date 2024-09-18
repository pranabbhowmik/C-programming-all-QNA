#include<stdio.h>
// #include<math.h>
int main(){
    int i,n;
    printf("Enter the numnber:");
    scanf("%d",&n);
    printf("Enter the number 1 to %d \n",n);
    for ( i = 0; i <=n ; i++)
    {
        if (i%2!=0)
        {
            printf("%d\n",i);
        }
        
    }
    return 0;
}