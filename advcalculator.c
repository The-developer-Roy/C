#include<stdio.h>

int main()
{
    int num1, num2, n, i=1, sum;
    printf("\nEnter 2 numbers: \n");
    scanf("%d%d", &num1, &num2);
    sum = num1 + num2;
    printf("\n%d", sum);
    printf("\n-----------------\n");
    for (i=1; i>0;)
    {
        char ch;
        getchar();
        printf("Do you want to add again, Enter n for No and y for Yes \n");
        ch = getchar();
        if (ch=='y')
        {
            printf("\nEnter new number:\n");
            scanf("%d", &n);
            sum=sum+n;
            printf("%d", sum);
            printf("\n-----------------\n");
        }
        else{
            break;
        }
        
    }
    
    return 0;
}