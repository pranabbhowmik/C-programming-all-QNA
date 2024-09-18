#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int num,guess,notguess=1;
    srand(time(0));
    num = rand()%100 + 1;
    do
    {
        printf("Guess the number between 1 to 100: \n");
        scanf("%d",&guess);
        if (guess>num)
        {
            printf("Enter the Lower number please!\n");
        }
        else if (guess<num)
        {
            printf("Enter the higher number please!\n");
        }
        else{
            printf("you put the right number in %d attempts\n",notguess);
        }
        notguess ++;
        
    } while (guess!=num);
    return 0;
}