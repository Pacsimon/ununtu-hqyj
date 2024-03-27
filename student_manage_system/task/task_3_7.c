#include <stdio.h>
#include <string.h>

int main()
{
    char *s="abcde";
    char *p=s;
    s+=2;
    printf("%ld\n",p);
    printf("%ld\n",s);
}