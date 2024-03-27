#include <stdio.h>

int main(int argc, const char *argv[])
{
	char a[6];
	char b[4];
	int ret;

	//a按照字符串形式输入，b按照字符形式输入
retry:
	printf("---字符串形式输入a---\n");
	ret = scanf("%s",a);
	if(ret != 1)
	{
		while(getchar()!='\n')
			goto retry;
	}
	printf("----字符形式输入b----\n");
	for (int i=0; i<4; i++)
	{
		scanf("%c",&b[i]);
	}
	
	//a字符串形式输出
	printf("字符串形式输出");
	printf("%s",a);
	//a字符形式输出
	for(int i=0;i<6;i++)
	{
		printf("%c",&a[i]);
	}
	
	putchar(10);

	//b字符形式输出
	for (int i=0; i<4; i++)
	{
		printf("%c",b[i]);
	}
	
	
	
	return 0;
}
