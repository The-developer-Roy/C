#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int m;

    printf("Enter any number: ");
    scanf("%d", &m);

    for (int i = 0; i < 10; i++)
    {
        int p = arr[i] % m;
        if (p == 0)
        {

            printf("%d\n", arr[i]);
        }
    }
}