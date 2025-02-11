#include<stdio.h>

int main()
{
    int m, n;

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int arr1[m][n], arr2[m][n], arr3[m][n];

    printf("Enter elements in matrix 1 below\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element %d%d: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("The entered elements of matrix 1 are shown below\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element %d%d = %d\n", i, j, arr1[i][j]);
        }
    }

    printf("Enter elements in matrix 2 below\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element %d%d: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("The entered elements of matrix 2 are shown below\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element %d%d = %d\n", i, j, arr2[i][j]);
        }
    }

    printf("The sum of elements of matrix 1 and matrix 2 are shown below\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            printf("Element %d%d = %d\n", i, j, arr3[i][j]);
        }
    }
    
    return 0;
}