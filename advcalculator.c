#include <stdio.h>

int add(int num1, int num2)
{
    int i = 1, sum, n;
    sum = num1 + num2;
    printf("\n%d", sum);
    for (i = 1; i > 0;)
    {
        char ch;
        getchar();
        printf("Do you want to add again, Enter n for No and y for Yes \n");
        ch = getchar();
        if (ch == 'y')
        {
            printf("\nEnter new number:\n");
            scanf("%d", &n);
            sum = sum + n;
            printf("%d", sum);
            printf("\n-----------------\n");
        }
        else
        {
            break;
        }
    }
    return 0;
}

int sub(int num1, int num2)
{
    int i = 1, sum, n;
    sum = num1 - num2;
    printf("\n%d", sum);
    for (i = 1; i > 0;)
    {
        char ch;
        getchar();
        printf("Do you want to add again, Enter n for No and y for Yes \n");
        ch = getchar();
        if (ch == 'y')
        {
            printf("\nEnter new number:\n");
            scanf("%d", &n);
            sum = sum - n;
            printf("%d", sum);
            printf("\n-----------------\n");
        }
        else
        {
            break;
        }
    }
    return 0;
}

int mul(int num1, int num2)
{
    int i = 1, sum, n;
    sum = num1 * num2;
    printf("\n%d", sum);
    for (i = 1; i > 0;)
    {
        char ch;
        getchar();
        printf("Do you want to add again, Enter n for No and y for Yes \n");
        ch = getchar();
        if (ch == 'y')
        {
            printf("\nEnter new number:\n");
            scanf("%d", &n);
            sum = sum * n;
            printf("%d", sum);
            printf("\n-----------------\n");
        }
        else
        {
            break;
        }
    }
    return 0;
}

int div(int num1, int num2)
{
    int i = 1, sum, n;
    sum = num1 / num2;
    printf("\n%d", sum);
    for (i = 1; i > 0;)
    {
        char ch;
        getchar();
        printf("Do you want to add again, Enter n for No and y for Yes \n");
        ch = getchar();
        if (ch == 'y')
        {
            printf("\nEnter new number:\n");
            scanf("%d", &n);
            sum = sum / n;
            printf("%d", sum);
            printf("\n-----------------\n");
        }
        else
        {
            break;
        }
    }
    return 0;
}

int main()
{
    int n1, n2, choice;
    printf("Choose the arithmetic operations you want to continue with:\n");
    printf("1 for Addition\n");
    printf("2 for Substraction\n");
    printf("3 for Multiplication\n");
    printf("4 for Division\n");
    scanf("%d", &choice);
    printf("\nEnter 2 numbers: \n");
    scanf("%d%d", &n1, &n2);
    switch (choice)
    {
    case 1:
    {
        add(n1, n2);
        break;
    }
    case 2:
    {
        sub(n1, n2);
        break;
    }
    case 3:
    {
        mul(n1, n2);
        break;
    }
    case 4:
    {
        div(n1, n2);
        break;
    }
    }
    printf("\n------------------\n");

    return 0;
}