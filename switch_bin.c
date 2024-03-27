#include <stdio.h>

int main()
{
	unsigned int number = 10;
	int number2 = 0x80000000;
	int i;
	
	printf("0b");
	for(i=0;i<32;i++)
	{
		if((number & (0x80000000>>i)) == 0)
		{
			printf("0");
		}
		else
			printf("1");
	}
	printf("\n");
	return 0;
}
