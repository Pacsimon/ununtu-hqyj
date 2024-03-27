#include <stdio.h>
// int i=2;
// int a=0;
// int fibonacci(int n)
// {
//     if((n==1)||(n==2))
//         return 1;
//     while(i<a)
//     {
//         p[i] = p[i-1]+p[i-2];
//         return fibonacci(p,i++);
//     }
// }

// int main()
// {
//     int fibonaci[100]={1,1};
//     int j=0;
//     scanf("%d",&a); //6
//     fibonacci(fibonaci,a);
//     printf("%d",fibonaci[n-1]);

// }

 
int fibonacci(int n)
{
    if((n==1)||(n==2))
        return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int fibonaci[100]={1,1};
    int a=0;
    scanf("%d",&a); //6

    printf("%d\n",fibonacci(a));

}