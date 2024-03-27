#include <stdio.h>

int main()
{
	int i;
	for(i=1;i<101;i++)
	{
		if((i % 7 == 0) || (i % 10 == 7) || (i / 10 % 7 == 0))
			printf("%d:过\n",i);
		else
			printf("%d:拍桌子\n",i);
	}
	
	return 0;
	
}
