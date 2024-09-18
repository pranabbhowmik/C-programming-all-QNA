// C program to read a file and display its contents
#include<stdio.h>
int main()
{
    FILE*fptr;
    char ch;
    // on the file in read mode
    fptr = fopen("read.txt","r");
    //if the file is null then print error
    if (fptr==NULL)
    {
        printf("The file is Error is give me some correct data.");
        return 1;
    }
    // open the file and read and print
    while ((ch=fgetc(fptr)) !=EOF)
    {
        printf("%c",ch);
    }
    //  close the file
    fclose(fptr);
    
 return 0;
}