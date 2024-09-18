#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
   if (number>0)
   {
    printf("the number is positive");
   }
   else if (number<0)
   {
    printf("the number is negitive");
   }
   
   else if (number == 0)
   {
    printf("the number is equal to 0 ");

   }
     return 0;   
   
}

