#include <stdio.h>
#include <math.h>

int main()
{
    // Input coordinates of the circle's center and its radius
    int x_c, y_c, r;
    printf("Enter the coordinates of the circle's center (x_c, y_c): ");
    scanf("%d %d", &x_c, &y_c);
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    // Input coordinates of the point
    int x_p, y_p;
    printf("Enter the coordinates of the point (x_p, y_p): ");
    scanf("%d %d", &x_p, &y_p);

    // Calculate the square of the distance between the point and the center of the circle
    double distance_squared = pow(x_p - x_c, 2) + pow(y_p - y_c, 2);

    // Calculate the square of the radius
    double radius_squared = pow(r, 2);

    // Determine the position of the point relative to the circle
    if (distance_squared < radius_squared)
    {
        printf("The point lies inside the circle.\n");
    }
    else if (distance_squared == radius_squared)
    {
        printf("The point lies on the circle.\n");
    }
    else
    {
        printf("The point lies outside the circle.\n");
    }

    return 0;
}