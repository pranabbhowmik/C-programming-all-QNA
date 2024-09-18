#include<stdio.h>
long AddTwonumber(long*,long*);
int main(){
    long a,b,sum;
    printf("Enter the first number:");
    scanf("%ld",&a);
    printf("Enter the scound number:");
    scanf("%ld",&b);
    sum = a + b;
    printf("sum of the %ld and %ld is %ld",a,b,sum);
}
long AddTwonumber(long* n1, long* n2){
    long sum;
    sum = *n1 + *n2;
    return sum;
}