#include <stdio.h>

int main(void)
{

    int a, i=2;
    printf("How many times do you want to iterate: ");
    scanf("%d", &a);

    label:{

        printf("Hello, world!\n");

        if (i<=a)
        {
            i++;
            goto label;

        }
    }
    printf("Out of the Goto loop!\n");
    return 0;
}
