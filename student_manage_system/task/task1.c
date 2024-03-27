#include <stdio.h>

int main()
{
    unsigned int *p = (unsigned int *)0x80000000;
    *p = 0x12345678;
    printf("%d",*p);
}