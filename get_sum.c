#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int get_sum(int n){
    return n*(n+1)/2;
}

int main()
{
    srand(time(0));

    int number = rand() % 100 + 1;

    printf("Generated number: %d\n", number);

    int sum = get_sum(number);

    printf("Sum of all natural nnumbers up to %d: %d\n", number, sum);
    
    return 0;
}