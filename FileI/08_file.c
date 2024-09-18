#include <stdio.h>
// Write a C program to append content to a file.

int main()
{
    FILE *fp;
    char data[100];
    // open file in append mode
    fp = fopen("file.txt", "a");
    if (fp == NULL)
    {
        printf("Error to open the file,\n");
        return 1;
    }
    // Get data from user
    printf("Enter the data:\n");
    fgets(data, sizeof(data), stdin);
    // append data to the file
    fprintf(fp, "%s", data);
    // close the file
    fclose(fp);

    printf("Append Data to the file\n");

    return 0;
}