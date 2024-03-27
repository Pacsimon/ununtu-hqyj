//题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
#include <stdio.h>

int main()
{
    int sum=0;
    int same=0;
    int number[100]={0};

    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            for(int k=1;k<=4;k++)
            {
                number[sum] = 100*i + 10*j + k;
                printf("%d\n",number[sum]);
                sum++;
            }
        }
    }
    for(int m=0;m<sum;m++)
    {
        for(int n=0;n<sum;n++)
        {
            if((number[m]==number[n])&&(n!=m))
                same++;
        }
    }
    printf("能组成%d个互不相同且无重复数字的三位数。\n",sum-same);
}