#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a[2][3] = {1,2,3,4,5,6};

	int *p=NULL;
	p = a[0];
	for(int i=0;i<6;i++)
		printf("%d\n",p[i]);
	for(int i=0;i<6;i++)
		printf("%d\n",*(p+i));
	for(int i=0;i<6;i++)
		printf("%d\n",*(p++));
	

	return 0;
}
