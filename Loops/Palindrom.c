// input a number from user and check the number is palindom or not.

#include <stdio.h>
#include <stdlib.h>
int ispalindrom(int num)
{
  int rev = 0;
  int originalNumber=num;
  while (num != 0)
  {
    rev = rev * 10 + num % 10;
    num = num / 10;
  }
  printf("The revers number is %d\n", rev);
  if (originalNumber == rev)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  int number;
  printf("Enter the number:");
  scanf("%d", &number);

  if (ispalindrom(number))
  {
    printf("The number is palindrom");
  }
  else
  {
    printf("The number is not a palindrom number");
  }

  return 0;
}