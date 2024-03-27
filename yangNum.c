#include <stdio.h>

int main(int argc, const char *argv[])
{
	int y[10][10]={0};

	y[0][0]=1;
	printf("%d\n",y[0][0]);
	for(int i=2;i<11;i++)  //i=行，第二行到第十行
	{
		y[i-1][0]=1;
		for(int j=0;j<i;j++) //j=列，第0列到第i列
		{
			y[i-1][j]=y[i-2][j-1]+y[i-2][j];
			printf("%d\t",y[i-1][j]);
		}
		putchar(10);
	}
	return 0;
}
