#include<stdio.h>
int main(){
    int angle1,angle2,angle3,sum;
    printf("Enter first angle:");
    scanf("%d",&angle1);
    printf("Enter scound angle:");
    scanf("%d",&angle2);
    printf("Enter third angle:"); 
    scanf("%d",&angle3);
    printf("sum of the angle is %d + %d + %d= %d",angle1,angle2,angle3);

    if ((angle1 + angle2 +angle3 == 180)&& (angle1+angle2==angle3)&&(angle2+angle3==angle1)&&(angle3+angle1==angle2))
    {
        printf("the triangle is valid");
    }
    
    else{
        printf("the trianbgle is in valid");
    }

    return 0;
}