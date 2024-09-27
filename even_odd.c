#include<stdio.h>

int main()
{
    int n;
    int x = 2;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n==0)
    {
        printf("The number is even");
    } else if(n%x==0){
        printf("0 is neither odd nor even!!!");
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}
