#include <stdio.h>
int main()
{
    FILE *fptr;
    int number = 123094;
    fptr = fopen("pranab.txt", "w");
    fprintf(fptr, "The number is %d", number);
    fclose(fptr);
    return 0;
}