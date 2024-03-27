#include <stdio.h>

int main()
{
	int i = 1;
	int j;

	for(i=1;i<6;i++) // i:1,2,3,4,5   
	{
		j = 5 - i;// j '*'  i '0'  
		for(j = 5 - i;j > 0;j--)
		{
			printf(" ");
		}
		for(j = i;j > 0;j--)
		{
			printf("*");
		}
		printf("\n");
	}

	for(i=1;i<5;i++)  // i:1,2,3,4
	{
		j = 5 - i;
		for(j = 5 - i;j>0;j--)
		{
			printf("*");
		}
		for(j = i;j>0;j--)
		{
			printf(" ");
		}
		printf("\n");
	}

	return 0;
}
