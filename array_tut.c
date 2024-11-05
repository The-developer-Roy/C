#include<stdio.h>

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]); // INSERTION IN ARRAY
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]); // PRINTING FROM ARRAY
    }
    
    return 0;
}