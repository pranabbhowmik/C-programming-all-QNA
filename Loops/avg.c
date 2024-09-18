#include<stdio.h>
int main(){
    int n,i=1,sum=0;
    float avg = 0.0;
    printf("Enter the value:");
    scanf("%d",&n);
    do
    {
        sum = sum + i;
        i = i + 1;
    } while (i<=n);
    avg = (float) sum/n;
    printf("The sum of first %d numbers= %d\n ", n, sum);
    printf("the avg of first %d numbers = %f\n", n,avg);
    return 0;
}
