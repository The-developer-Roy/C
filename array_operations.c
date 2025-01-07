#include <stdio.h>

int main()
{
    int choice, n;
    int arr[10];

    while (1 == 1)
    {

        printf("\nCASE 1: Accept inputs and store them in an array\n");
        printf("CASE 2: Display the array elements with their array positions\n");
        printf("CASE 3: Find the sum and average of the array elements\n");
        printf("CASE 4: Find the smallest and largest elements in the array\n");
        printf("CASE 5: Find the number at a certain position of the array\n");
        printf("CASE 6: Find the elements in the array divisible by entered number\n");
        printf("CASE 7: Find the sum of the elements in the array at entered positions\n");
        printf("Enter case no: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            for (int i = 0; i < 10; i++)
            {
                printf("Enter element %d: ", i);
                scanf("%d", &arr[i]);
            }
            printf("The elements are stored in array");
            break;
        }
        case 2:
        {
            for (int i = 0; i < 10; i++)
            {
                printf("The Element is %d and it's position is %d\n", arr[i], i);
            }
            break;
        }
        case 3:
        {
            n = arr[0];
            for (int i = 1; i < 10; i++)
            {
                n = n + arr[i];
            }
            int avg = n / 10;
            printf("The sum of all array elements is %d and the average is %d\n", n, avg);
            break;
        }
        case 4:
        {
            int small = arr[0], large = arr[0];

            for (int i = 0; i < 10; i++)
            {
                if (arr[i] <= small)
                {
                    small = arr[i];
                }
                if (arr[i] >= large)
                {
                    large = arr[i];
                }
            }
            printf("The smallest element of the array is: %d\n", small);
            printf("The largest element of the array is: %d\n", large);
            break;
        }
        case 5:
        {
            int z;

            printf("Enter any position you want to see element of: ");
            scanf("%d", &z);
            if (z > 10)
            {
                printf("Please enter number between 0 and 9");
                break;
            }
            else
            {
                printf("The element at position %d is: %d", z, arr[z]);
            }
            break;
        }
        case 6:
        {
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
            break;
        }
        case 7:
        {
            int p, q;

            printf("Please enter two positions of elements you want to add");
            scanf("%d%d", &p, &q);

            if (p && q > 10)
            {
                printf("Please enter number between 0 and 9");
                break;
            }
            else
            {
                int sum = arr[p] + arr[q];
                printf("The sum of the elemewnts is: %d", sum);
                break;
            }
        }
        default:
        {
            for (int i = 0; i < 10; i++)
            {
                if (arr[i] == 0)
                {
                    printf("The array is empty.");
                }
            }
            break;
        }
        }
    }

    return 0;
}