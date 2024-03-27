#include <stdio.h>

int main()
{
	int a = 5;
	int b = -5;

	printf("a << 3 = %d\n",a<<3);
	printf("b << 3 = %d\n",b<<3);
	
	printf("a|1=%d\n",(a|1));
	printf("a|0=%d\n",(a|0));

	printf("a&1=%d\n",(a&1));
	printf("a&0=%d\n",(a&0));
	return 0;
}
