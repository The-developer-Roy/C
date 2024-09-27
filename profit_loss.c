#include<stdio.h>

int main()
{
    int cp, sp, ls, pr;
    printf("Enter the Cost Price and Selling Price, respectively (Sperate them by a space): ");
    scanf("%d%d", &cp, &sp);
    if (sp>cp)
    {
        printf("It's a profit!!\n");
        pr = sp - cp;
        printf("You made a profit of Rs. %d", pr);
    }
    else
    {
        if (sp==cp)
        {
            printf("Neither Profit nor Loss.");
        }
        else
        {
            printf("It's a loss!!\n");
            ls = cp - sp;
            printf("You have a loss of Rs. %d", ls);
        }
    }
    return 0;
}