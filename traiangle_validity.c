#include<stdio.h>

int main()
{
    int theta1, theta2, theta3, sum;
    printf("Enter the angles of tringle (seperate them by a space): ");
    scanf("%d%d%d", &theta1, &theta2, &theta3);
    sum = theta1 + theta2 + theta3;
    if (sum == 180)
    {
        printf("It's a valid triangle.");
    }
    else
    {
        printf("It's an invalid triangle!!");
    }
    return 0;
}
