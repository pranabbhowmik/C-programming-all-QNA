#include <stdio.h>
int main()
{
    int i, end = 20;
    for (i = 1; i <= end; i++)
    {
       if (i%3==0 || i%5==0)
       {
        printf("%d\n",i);
       }
       
    }
    return 0;
}