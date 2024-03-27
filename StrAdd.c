#include <stdio.h>

void mystrcat(char dest[100],char src[100])
{
	int i=0,j=0;
	while(dest[i])i++;
	while(src[j])
	{
		dest[i++]=src[j++];
	}
	dest[j]='\0';
}


int main(int argc, const char *argv[])
{
	char dest[100] = "hello";
	char src[100] = "world";
	mystrcat(dest,src);
	printf("dest:%s\n",dest);
	return 0;
}

