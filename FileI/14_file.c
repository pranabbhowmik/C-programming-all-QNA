// Write a C program to remove specific line from a text file.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *input, *output;
    char line[100];
    int line_number, current_line;
    // open the file in read and write mode
    input = fopen("show.txt", "r");  // read mode
    output = fopen("exit.txt", "w"); // write mode
    if (input == NULL || output == NULL)
    {
        printf("Error file not found");
        return 1;
    }
    printf("Enter the line to remove from file:");
    scanf("%d", &line_number);
    current_line = 1;
    while (fgets(line, sizeof(line), input))
    {
        if (current_line != line_number)
        {
            // Write line to output if not the specified line
            fputs(line, output);
        }
        current_line++;
    }
    // close file
    fclose(input);
    fclose(output);
    printf("Line remove successfully done \n");
    return 0;
}