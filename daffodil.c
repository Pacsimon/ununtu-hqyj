#include <stdio.h>

int main()
{
	int i=100;
	int g,s,b;
	int res;

	do
	{
		g = i % 10;
		s = i / 10 % 10;
		b = i / 100;
		res = g*g*g + s*s*s+ b*b*b;	
		if(res == i)
			printf("%d是水仙花数\n",i);
		//else
			//printf("%d不是水仙花数\n",i);
		i++;
	}while(i<1000);
	
	return 0;
}
