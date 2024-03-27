#include <stdio.h>

int sum(int a,int b)
{
    return (a+b);
}

int sub(int a,int b)
{
    return (a-b);
}

int main()
{
    int (*fun[2])(int ,int);
    fun[0]=sum;
    fun[1]=sub;
    printf("sum = %d\n",fun[0](100,200));
    printf("sub = %d\n",fun[1](100,200));

}