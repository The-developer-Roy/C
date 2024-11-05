#include<stdio.h>

int main()
{
    int i=3, *j, **k;
    j=&i;
    k=&j;
    printf("%u\n", &i);
    printf("%u\n", j);
    printf("%u\n", *k);
    printf("%u\n", &j);
    printf("%u\n", k);
    printf("%d\n", i);
    printf("%d\n", *(&i));
    printf("%d\n", *j);
    printf("%d\n", **k);
    return 0;
}