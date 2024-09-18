#include<stdio.h>
int main(){
    int phy,che,bio,math,com;
    float per;
    printf("Enter the mark of phy:");
    scanf("%d",&phy);
     printf("Enter the mark of che:");
    scanf("%d",&che);
     printf("Enter the mark of bio:");
    scanf("%d",&bio);
     printf("Enter the mark of math:");
    scanf("%d",&math);
     printf("Enter the mark of com:");
    scanf("%d",&com);

    per = (phy+che+bio+math+com)/5;
    printf("persentage %0.2f\n",per);

    if (per>=90)
    {
        printf("GradeA");
    }

  else if (per>=80)
  {
    printf("Grade B");
  }
  
  else if (per>=70)
  {
    printf("Grade C");
  }
   else if (per>=60)
  {
    printf("Grade D");
  }
  else if (per>=40)
  {
    printf("Grade E");
  }
  else if (per<40)
  {
    printf("Grade F");
  }
  else{
    printf(" You are Fail,Try next time");
  }
  return 0;
    
}