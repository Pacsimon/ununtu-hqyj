#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a[2] = {111,222};
	int b[2] = {333,444};

	int *x[2]={a,b};
	int c[2][3] = {1,2,3,4,5,6};
	//x[0]  111的地址
	//x
	//
	//
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
			printf("%d\t",*(x[i]+j));
		putchar(10);
	}	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
			printf("%d\t",*(*(x+i)+j));
		putchar(10);
	}
	printf("%d",c);
	return 0;
}
