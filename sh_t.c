#include <stdio.h>

int main()
{
    float bs, da, hra, gs;
    printf("Enter Your Basic Salary: ");
    scanf("%f", &bs);
    if (bs<1500)
    {
        hra = 0.1*bs;
        da = 0.9*bs;
        gs = bs + hra + da;
        printf("Your gross salary is: %f", gs);
    }
    else
    {
        hra = 500;
        da = 0.98*bs;
        gs = hra + da + bs;
        printf("Your gross salary is: %f", gs);
    }
    return 0;
}