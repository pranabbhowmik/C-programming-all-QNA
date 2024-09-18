#include<stdio.h>
int main(){
    char ch;
    printf("Enter your chooce:");
    scanf("%c",&ch);
    if (ch >= 'a' && ch <= 'z' || ch >='A' && ch <= 'Z')
    {
        printf("you choose the alphabet");
    }
     else{
        printf("Your choose not a alphabet");
     }
     return 0;
}
