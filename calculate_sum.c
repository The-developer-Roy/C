#include<stdio.h>

void calculate_sum(int a, int b){
    int sum = a + b;
    printf("The sum of the entered two numbers are: %d", sum);
}

int main()
{
    int i, j;
    printf("Enter the two numbers to print their sum: ");
    scanf("%d%d", &i, &j);
    calculate_sum(i, j);
    return 0;
}
