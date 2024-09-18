#include <stdio.h> 
int main()
{
    char input;
    float kmsTomiles = 0.621371;
    float inchesTofoot = 0.0833333;
    float cmaToinches = 0.393701;
    float poundTokgs = 0.453592;
    float inchesTometers = 0.0254;
    float first, scound;

    while (1)
    {
        printf("Enter the number q to quite\n     1.kms to miles\n    2.inches to foot\n   3.cms to inches\n    4.pound to kgs\n    5.inches to meters\n");
        scanf("%c", &input);
        switch (input)
        {
        case 'q':
        printf("Quitting the program...\n");
            goto end;
            break;
        case '1':
            printf("Enter the first unit:\n");
            scanf("%f", &first);
            scound = kmsTomiles * first;
            printf("%f kms is %f miles\n");
            break;

        case '2':
            printf("Enter the first unit:\n");
            scanf("%f", &first);
            scound = inchesTofoot * first;
            printf("%f inches is %f foots\n");
            break;

        case '3':
            printf("Enter the first unit:\n");
            scanf("%f", &first);
            scound = cmaToinches * first;
            printf("%f cms is %f inches\n");
            break;
        case '4':
            printf("Enter the first unit:\n");
            scanf("%f", &first);
            scound = poundTokgs * first;
            printf("%f pound is %f kgs\n");
            break;
        case '5':
            printf("Enter the first unit:\n");
            scanf("%f", &first);
            scound = inchesTometers * first;
            printf("%f inches is %f meters\n");
        default:
            break;
        }
    }
end:
    return 0;
}
