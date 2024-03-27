#include <stdio.h>

int main()
{
	int number1 = 100;
	int number2 = 200;

	int ret = ((number1 > number2) ? number1 : number2);

	printf("%d\n",ret);
	return 0;
}
