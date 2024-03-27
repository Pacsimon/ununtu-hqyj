#include <stdio.h>

int main(int argc, const char *argv[])
{
	char arr[100]={0};
	int i=0;
	scanf("%[^\n]",arr);
	//while(getchar()!='\n');

	while(arr[i]!='\0')
		i++;
	for(int j=0;j<i;j++)
		printf("%d",arr[j]);
	printf("%d\n",i);
	return 0;
}
