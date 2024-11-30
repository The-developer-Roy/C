#include <stdio.h>

int main()
{
    char ch;

    printf("Lowercase characters (a-z):\n");

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c\t", ch);
    }

    printf("\n\n");
    
    printf("Uppercase characters (A-Z):\n");

    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("%c\t", ch);
    }
    

    return 0;
}