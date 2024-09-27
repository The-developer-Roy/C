#include<stdio.h>

int main()
{
    int x1, y1, x2, y2, x3, y3;
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%d%d", &x1, &y1);

    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%d%d", &x2, &y2);

    printf("Enter the coordinates of the third point (x3, y3): ");
    scanf("%d%d", &x3, &y3);

    int det = x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2);

    if (det == 0)
    {
        printf("The points are coolinear.\n");
    }
    else
    {
        printf("The points are not coolinear.\n");
    }
    
    return 0;
}