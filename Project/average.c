#include<stdio.h>
float average(float a, float b,float c);

int main()
{   float a,b,c;
    printf("Enter the value of a:\n");
    scanf("%f",&a);
     printf("Enter the value of b:\n");
    scanf("%f",&b);
     printf("Enter the value of c:\n");
    scanf("%f",&c);
    float f = average(a,b,c);
    printf("The average is %f",f);
    return 0;
}
float average(float a, float b,float c){
   
    return (a+b+c)/3;
}
