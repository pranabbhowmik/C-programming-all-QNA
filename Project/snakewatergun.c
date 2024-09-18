#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakewatergun(char you, char computer){
    // result -1 you loos, result 1 youn win,result 0 draw

    if (you==computer)
    {
        return 0;
    }
    if (you=='w'&&computer=='g')
    {
        return 1;
    }
    else if (you=='g'&&computer=='w')
    {
        return -1;
    }
     if (you=='s'&&computer=='w')
    {
        return 1;
    }
    else if (you=='w'&&computer=='s')
    {
        return -1;
    }
     if (you=='s'&&computer=='g')
    {
        return -1;
    }
    else if (you=='g'&&computer=='s')
    {
        return 1;
    }
    
}

int main()
{
 char you,computer;
 int num;
  srand(time(0));
    num = rand()%100 + 1;
if (num<33)
{
    computer ='w';
}
else if (num>33&&num<66)
{
    computer='s';
}
else{
    computer='g';
}
 printf("Enter the key'w'for water 's'for snake 'g'for gun:\n" );
 scanf("%d",&you);
 int result = snakewatergun(you,computer);
 if (result==0)
 {
    printf("Game draw\n");
 }
 else if (result==1)
 {
    printf("You win\n");
 }
 else{
    printf("you loss\n");
 }
 printf("You choose %c and computer choose %c",you,computer);
 
 
 return 0;
}