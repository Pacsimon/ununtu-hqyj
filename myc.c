#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[2]={1,2};
    char s[8]={0};
    *((int *)s) = *a;
    printf("%p\n",s);
    printf("%p\n",s+1);
    printf("%c\n",*(s+4));
    printf("%c\n",*(s+5));
    printf("%c\n",*(s+6));
    printf("%c\n",*(s+7));
    return 0;
}