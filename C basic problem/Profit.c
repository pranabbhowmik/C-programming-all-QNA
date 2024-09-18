#include <stdio.h>
int main()
{
    int cp, sp, amt;
    printf("Enter the cost prise:");
    scanf("%d", &cp);
    printf("Enter the sell price:");
    scanf("%d", &sp);

    if (sp > cp)
    {
        amt = sp - cp;
        printf("profit = %d", amt);
    }

    else if (cp > sp)
    {
        amt = sp - cp;
        printf("Loss = %d", amt);
    }

    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}