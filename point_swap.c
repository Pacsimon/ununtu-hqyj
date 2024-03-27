#include <stdio.h>
#include <string.h>

/*
函数名： swap
参  数： char *p
返回值： char *
*/
char *swap(char *ch)
{
	char *p=NULL,*q=NULL,*m=NULL;

	p = &ch[0];
	q = &ch[strlen(ch)-1];
	m = &ch[0];
	while(p < q)
	{
		*p ^= *q;
		*q ^= *p;
		*p ^= *q;
		p++;q--;
	}

	p=q=m;
	while(*q != ' ')
		q++;
	m=q;
	q--;
	while(p < q)
	{
		*p ^= *q;
		*q ^= *p;
		*p ^= *q;
		p++;q--;
	}
	
	p=q=++m;
	while(*q != ' ')
		q++;
	m=q;
	q--;
	while(p < q)
	{
		*p ^= *q;
		*q ^= *p;
		*p ^= *q;
		p++;q--;
	}

	p=q=++m;
	while(*q != '\0')
		q++;
	m=q;
	q--;
	while(p < q)
	{
		*p ^= *q;
		*q ^= *p;
		*p ^= *q;
		p++;q--;
	}
}

int main()
{
	//i love china -> anihc evol i -> china love i.
	char a[]="i love china";
	swap(a);
	printf("a = %s\n",a);


}
