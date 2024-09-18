#include<stdio.h>
int numprint(int);

int main(){
    int n = 1;
	printf("\n\n Recursion : print first 50 natural numbers :\n");
	printf(" The natural numbers are :");
    numprint(n);
    printf("\n\n");
    return 0;
}
int numprint(int n)
{
    if(n<=50)
    {
         printf(" %d ",n);
         numprint(n+1);
    }
}