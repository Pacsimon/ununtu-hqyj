#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int num=0;
	for(int i=1;i<argc;i++)
	{
		
			num = num*10 +(*(argv[i]+(argc-i-1))-'0');
			printf("%d\n",num);
		
	}
	return 0;
}


