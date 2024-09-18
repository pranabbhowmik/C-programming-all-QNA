// C program to remove a word from text file
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LINE 100
#define MAX_WORD 100
int main()
{
    char word[MAX_WORD];
    printf("Enter the words you want to remove from file:");
    gets(word);
    FILE *input,*output;
    // creating files in read and write mode
    input = fopen("in.txt", "r");
    output = fopen("out.txt", "w");
    if (input == NULL || output == NULL)
    {
        printf("Error file dous not found \n");
        return 1;
    }
    char line[MAX_LINE];
    while (fgets(line, MAX_LINE, input) != NULL)
    {
        char *ptr = strstr(line, word);
        while (ptr != NULL)
        {
            *ptr = ' '; // where we find the word in string and put there the gap
            ptr = strstr(ptr, word);
        }
        fputs(line, output);
    }
    fclose(input);
    fclose(output);

    // delete the original input and rename the file
    remove("in.txt");
    rename("out.txt", "in.txt");
    printf("Word '%s' has been removed from the file. \n", word);
    return 0;
}