// Write a C program to copy contents from one file to another file.

#include <stdio.h>
int main()
{
    FILE *scource, *terget;
    char ch;
    // file creat in r and w mode
    scource = fopen("scource.txt", "r");
    terget = fopen("terget.txt", "w");
    if (scource == NULL || terget == NULL)
    {
        printf("Error file is not found!");
        return 1;
    }
    while ((ch = fgetc(scource)) != EOF)
    {
        fputc(ch, terget);
    }

    printf("copy sucssfully\n");
    fclose(scource);
    fclose(terget);
    return 0;
}