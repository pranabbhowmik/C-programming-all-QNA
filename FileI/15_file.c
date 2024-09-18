// Write a C program to remove empty lines from a text file.
#include<stdio.h>
int main()
{
    FILE*fp,*temp;
    char c;

    // open the file in read mode
    fp = fopen("fp.txt","r");
    // creat a temporary file in write mode
    temp = fopen("temp.txt","w");
    // if the files are NULL than give me error
    if (fp==NULL||temp==NULL)
    {
        printf("Error to creat the file \n");
        return 1;
    }
    // read the file character by character
    while ((c = fgetc(fp)!=EOF))
    {
        // if the current character is not a newline the input in temp file character by character ( using like copy)
        if (c !='\n')
        {
            fputc(c,temp);
        }
         // If the current character is a newline, check if the next character is also a newline
        else{
            char next= fgetc(fp);
            if (next != '\n')
            {
                fputc(c,temp);
            }
            else{
                // If the next character in also a new line,skip it.
                continue;
            }
            
        }
        
    }
    // close the file
    fclose(fp);
    fclose(temp);
    //   remove the original name the rename the file 
    remove("fp.txt");
    rename("temp.txt","fp.txt");
    printf("Remove successfully\n");
 return 0;
}