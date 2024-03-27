#include <stdio.h>

int main(int argc, const char *argv[])
{
	char c;
	while((c=getchar())!='?')
		putchar(--c);
	return 0;
}
