// Write a program to display the aquare and cube
#include<stdio.h>
int main(){
    int n,i;
    clrscr();
    printf("Enter the number:",&n);
    i = 1;
    for (int i = 1; i <= n ; i++)
    {
        printf("\n | \t %d \t | \t %d \t | \t %d \t|",i,i*i,i*i*i);
    }
    printf("\n......................");
    return 0;
    
}