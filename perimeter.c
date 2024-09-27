#include<stdio.h>

int main()
{
    int l, b, perimeter, area;
    printf("Enter the length and breadth of the triangle (seperate them by a space): ");
    scanf("%d%d", &l, &b);
    perimeter = (l + b)*2;
    area = l*b;
    if (area>perimeter)
    {
        printf("The area of the rectangle is greater than perimeter");
    }
    else
    {
        printf("The area of the rectangle is not greater than perimeter");
    }
    
    return 0;
}