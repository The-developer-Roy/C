#include<stdio.h>

int main()
{
    int arr1[2][2] = {(1, 2), (3, 4)};
    int arr2[2][2] = {(1, 3), (4, 5)};
    int arr3[2][2];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("%d", arr3);
    
    return 0;
}