// Write a C program to count characters, words and lines in a text file.
#include <stdio.h>
int main()
{
    FILE *fpr;
    char BATA[200];
    char ch;
    int character, word, line;
    // input the data from user
    printf("Enter the data into the BATA file:");
    scanf("%s", BATA);
    // file creat in reading mode
    fpr = fopen("BATA.txt", "r");
    if (fpr == NULL)
    {
        printf("Error file not found\n");
        return 1;
    }
    character=line=word=0;
    // logic for count the characters words line
  while ((ch = fgetc(fpr)) != EOF) {
        character++;

        if (ch == '\n') {
            line++;
        }

        if (ch == ' ' || ch == '\t' || ch == '\n') {
            word = 0;
        } else if (!word) {
            word = 1;
            word++;
        }
    }
    fclose(fpr);
    printf("The total lines is %d\n", line);
    printf("The total words is %d\n", word);
    printf("The total characters is %d\n", character);

    return 0;
}