#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int arr1[m][n], arr2[m][n], arr3[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element %d%d of array 1: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element %d%d of array 2: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("The entered elements of array 1 are: \n");
            printf("element %d%d = %d", i, j, arr1[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("The entered elements of array 2 are: \n");
            printf("element %d%d = %d", i, j, arr2[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr3[i][j] = arr1[i][j] * arr2[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("The mulitplied result of array 1 and array 2 is: %d\n", arr3[i][j]);
        }
    }

    return 0;
}