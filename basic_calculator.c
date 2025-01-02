#include<stdio.h>

int main()
{
    int operation, i, j, result;
    printf("Enter the first number: ");
    scanf("%d", &i);
    printf("Enter the second number: ");
    scanf("%d", &j);
    printf("Enter the operation you want to execute: \n");
    printf("1 for addition\n");
    printf("2 for Substraction\n");
    printf("3 for multiplication\n");
    printf("4 for division\n");
    printf("5 for modulus\n");
    printf("6 for square\n");
    scanf("%d", &operation);
    switch (operation)
    {
    case 1:{
        result = i + j;
        printf("The sum of the first number and second number: %d", result);
        break;
    }
    case 2:{
        result = i - j;
        printf("The substraction of the two numbers is: %d", result);
        break;
    }
    case 3:{
        result = i * j;
        printf("The multiplication of the two numbers is: %d", result);
        break;
    }
    case 4:{
        result = i/j;
        printf("The division of the numbers is: %d", result);
        break;
    }
    case 5:{
        result = i%j;
        printf("The modulus of the number is: %d", result);
        break;
    }
    case 6:{
        result = i*i;
        printf("The square of the first number: %d", result);
        result = j*j;
        printf("The square of the second number: %d", result);
        break;
    }
    default:{
        printf("Wrong choice!!!!");
        break;
    }
    }
    return 0;
}
