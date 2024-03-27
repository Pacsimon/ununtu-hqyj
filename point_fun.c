#include <stdio.h>

long strlen(char *s)
{
	if(s == NULL)
		return 0;
	char *t=s;
	while(*s != '\0') s++;
	return s-t;
}

int strcmp(char *s1,char *s2)
{
	if((s1 == NULL) || (s2 == NULL))
		return 0;
	char *t = s1;
	while(*s1 != '\0')
		*s2++=*s1++;
	*s2 = '\0'
}



int main(int argc, const char *argv[])
{
	char a[] = "i love china";
	char b[] = "hello world";
	char c[] = {0};

	printf("strlen(a) = %ld\n",strlen(a));
	printf("c = %s\n",strcmp(b,c));
	return 0;
}
