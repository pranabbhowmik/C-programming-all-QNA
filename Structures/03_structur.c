// create a two dimesional vector using

#include <stdio.h>

struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;
    v1.x = 12;
    v1.y = 34;
    printf("The X dim is %d, And Y dim is %d", v1.x, v1.y);
    return 0;
}