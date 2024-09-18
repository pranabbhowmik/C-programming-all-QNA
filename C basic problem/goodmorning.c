#include <stdio.h>
char str[] = "Good Morning";
int main()
{
    printf("\n %s", str);
    printf("\n %15s", str);
    printf("\n %20s", str);
    printf("\n %2.10s", str);
    printf("\n%.7s", str);
    printf("\n %22.79s", str);
    return 0;
} 