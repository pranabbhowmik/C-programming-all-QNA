#include <stdio.h>

int main(){
    int n, lastnumber;
    printf("Enter the number:");
    scanf("%d",&n);
    lastnumber= n % 10;
    printf("the last number is %d", lastnumber);
    return 0;
    }