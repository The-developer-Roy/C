#include<stdio.h>

void calculate_avg(int a, int b, int c, int d, int e){
    int sum = a + b + c + d + e;
    int avg = sum/5;
    printf("The average of the entered five numbers are: %d", avg);
}

int main()
{
    int i, j, k, l, m;
    printf("Enter five numbers to print their average: ");
    scanf("%d%d%d%d%d", &i, &j, &k, &l, &m);
    calculate_avg(i, j, k, l, m);
    return 0;
}