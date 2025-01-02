#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    srand(time(0));
    int random = (rand() % (9999999999 - 99999999 + 1)) + 99999999;
    printf("%d", random);
    return 0;
}