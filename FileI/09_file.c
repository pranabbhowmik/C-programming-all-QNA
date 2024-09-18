// Write a C program to compare two files.
#include <stdio.h>
int main()
{
    FILE *file1, *file2;
    int data1, data2, pos;
    // creat the file in readbinary mode
    file1 = fopen("file1.txt", "rb");
    file2 = fopen("file2.txt", "rb");
    pos = 0;
    while (1)
    {
        data1 = fgetc(file1);
        data2 = fgetc(file2);

        if (data1 != data2 || data1 == EOF || data2 == EOF)
        {
            if (data1 != data2)
            {
                printf("File are different at %d position ", pos);
            }
            else if (data1 == EOF || data2 == EOF)
            {
                printf("File are same");
            }
            else
            {
                printf("File are different length");
            }
            break;
        }
        pos++;
    }
    fclose(file1);
    fclose(file2);

    return 0;
}