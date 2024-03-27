#include <stdio.h>
int mystrlen(char arr[100])
{
	int i=0;
	while(arr[i] != '\0')
		i++;
	return i;
}
int main(int argc, const char *argv[])
{
	char a[] = "hello world";
	int b[2][3]={0};
	char *p = NULL;
	char *q = NULL;
	char swap=0;

	p = &a[0];
	q = &a[mystrlen(a)-1];

	while(p < q)
	{	
		swap = *p;
		*p = *q;
		*q = swap;
		p++;q--;
	}
	printf("%s\n",a);
	printf("%d\n",&&b);
	return 0;
}
