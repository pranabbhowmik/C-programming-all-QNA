#include <stdio.h>
int main()
{
    int a, b, c;
    FILE *ptr;
    ptr = fopen("joyita.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("The number is %d %d %d\n", a, b, c);
    return 0;
}