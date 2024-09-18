// write a c function semvector wchichreturnsthe sum of two vector passed to it.the vector must be two-dimensional

#include <stdio.h>

struct vector
{
    int x;
    int y;
};
struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{
    struct vector v1, v2, sum;
    v1.x = 2;
    v1.y = 4;
    printf("The X dim is %d, And Y dim is %d\n", v1.x, v1.y);

    v2.x = 9;
    v2.y = 3;
    printf("The X dim is %d, And Y dim is %d\n", v2.x, v2.y);
    sum = sumVector(v1, v2);
    printf("The sum of the X dim is %d,The sum of the Y dim is %d\n", sum.x, sum.y);
     return 0;
}