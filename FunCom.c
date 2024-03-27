#include <stdio.h>
#include <string.h>
int mystrlen(char arr[100])
{
	int i=0;
	while(arr[i] != '\0')
		i++;
	return i;
}
void mystrcpy(char a[100],char b[100]) //a->b
{
	int i=0;
	while(a[i] != '\0')
	{
		b[i] = a[i];
		i++;
	}
	b[i]='\0';
}
void StrDeleteSpace(char a[100],char b[100]) //a->b
{
	int i=0,j=0;
	for(i=0;i<100;i++)
	{
		if(a[i]!=' ')
		{
			b[j]=a[i];
			j++;
		}
	}
	b[j]='\0';
}
int main(int argc, const char *argv[])
{
	char a[100]="dadsdadaskhkgelwekb";
	char b[100]="i  love  china!";
	char c[100]={0};
	char d[100]={0};
	printf("number of string a:%d\n",mystrlen(a));
	mystrcpy(b,c);
	printf("copy:%s\n",c);
	StrDeleteSpace(b,d);
	printf("cut null:%s\n",d);
	return 0;
}
