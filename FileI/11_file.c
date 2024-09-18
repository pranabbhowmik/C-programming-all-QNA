// C program to merge two files to third file
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE*f1,*f2,*f3;
    char ch;
    // files open in mode
    f1 = fopen("f1.txt","r");
    f2 = fopen("f2.txt","r");
    f3 = fopen("f3.txt","w");

    if (f1==NULL||f2==NULL||f3==NULL)
    {
        printf("Error the file not found!\n");
        return 1;
    }

    // copy data file 1 to file 3
    while ((ch =fgetc(f1))!=EOF)
    {
        fputc(ch,f3);
    }
    // copy data file 2 to file 3
    while ((ch=fgetc(f2))!=EOF)
    {
        fputc(ch,f3);
    }

    printf("marge successfully\n");

    fclose(f1);
    fclose(f2);
    fclose(f3);
 return 0;
}