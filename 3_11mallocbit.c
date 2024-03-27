#include <stdio.h>
#include <stdlib.h>

int input(int **str)
{
    int n;
retry:
    printf("input n :");
    scanf("%d",&n);
    while(getchar()!='\n');
    if(n<=0)
        goto retry;

    *str = (int *)malloc(n*sizeof(int *)); 
    for(int i=0;i<n;i++)
    {
        scanf("%d",*str+i);
    }
    while(getchar()!='\n');
    // for(int j=0;j<n;j++)
    // {
    //     printf("%d\t",str[j]);
    // }
    return n;
}

void sort_1(int *str,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(str[j]>str[j+1])
            {
                str[j] ^= str[j+1];
                str[j+1] ^= str[j];
                str[j] ^= str[j+1];
            }
        }
    }

    
}


int main()
{
    int *p=NULL;
    int num=0;
    
    num = input(&p);
    sort_1(p,num);

    for(int j=0;j<num;j++)
    {
        printf("%d\t",p[j]);
    }
    putchar(10);

    free(p);
    p=NULL;

}