#include <stdio.h>

int main()
{
	char alpha = getchar();
	char change;
	printf("alpha = %c\n",alpha);

	change = ((65<=alpha) && (alpha<=90)) ? (alpha+32) : (alpha-32);
	printf("change = %c\n",change);

	return 0 ;
}
