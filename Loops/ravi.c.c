#include<stdio.h>
int main()
{
    char ravi = 30;
    char *b = &ravi;
    printf("Plz show the number %c\n",*b);
    printf("Plz show the number %c\n", ravi);
     printf("Plz show the number %u\n", &ravi);
    printf("Plz show the number %u\n", &b);
    return 0;
}