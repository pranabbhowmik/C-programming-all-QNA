#include<stdio.h>
int main()
{
    FILE*ptr;
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    ptr = fopen("Table.txt","w");
    for (int i = 1; i < 10; i++)
    {
        fprintf(ptr,"%d x %d = %d\n",num,i,num*i);
    }
    fclose(ptr);
    
 return 0;
}