#include<stdio.h>
int reverse(int number){
    if (number== 0 || number==1)
{
    return 0;
}
else{
    return (number - 1);
}

}

int main(){
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("%d reverse number is %d\n",num,reverse(num));
    return 0;
}