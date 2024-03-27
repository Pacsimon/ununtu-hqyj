#include <stdio.h>

char sum(char a)
{
    return a;
}



void show(char a,char (*fun)(char))
{
    printf("result = %c\n",fun(a));
}

int main()
{
    show('2',sum);
}