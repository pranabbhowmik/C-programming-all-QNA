// delete the file in c using file handling

#include<stdio.h>
int main()
{
 int status;
 char file_name[25];
 printf("Enter the file name that you want to delete:");
 gets(file_name);
 status =remove(file_name);
 if (status==0)
 {
    printf("%s file is deleted succesfully\n");
 }
 else{
    printf("we cannot understand your input please give us right file name\n");
 }
 
 return 0;
}