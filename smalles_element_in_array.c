#include<stdio.h>

int main()
{
    int arr[10] = {5, 6, 1, 4, 7, 2, 8, 3, 9, 11};
    int small = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i]<=small)
        {
            small = arr[i];
        }
    }
    printf("smallest = %d", small);

    return 0;
}