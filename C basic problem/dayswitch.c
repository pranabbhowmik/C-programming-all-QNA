#include <stdio.h>
int main()
{
    char che;

    printf("Enter the character:");
    scanf("%c", &che);

    switch (che)
    {
    case 'a':
        printf("This character is vowel");
        break;
    case 'e':
        printf("This character is vowel");
        break;
    case 'i':
        printf("This character is vowel");
        break;
    case '0':
        printf("This character is vowel");
        break;
    case 'u':
        printf("This character is vowel");
        break;
    case 'A':
        printf("This character is vowel");
        break;
    case 'E':
        printf("This character is vowel");
        break;
    case 'I':
        printf("This character is vowel");
        break;
    case 'O':
        printf("This character is vowel");
        break;
    case 'U':
        printf("This character is vowel");
        break;
        
    default:
        printf("The character is consonent");
       
    }

    return 0;
}