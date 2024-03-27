#include <stdio.h>

int main(int argc, const char *argv[])
{
	//实现字符串拷贝的代码
	char a[100]={0};
	char b[100]={0};
	char c[100]={0};
	int i=0,j=0,k=0;
	char swap;
	printf("输入a中字符串：");
	scanf("%[^\n]",a);

	while(getchar()!='\n');//吃掉垃圾字符
	while(a[i]!='\0')
	{
		b[i]=a[i];
		i++;
	}
	b[i]='\0';
	printf("b中字符串为：%s\n",b);

	//删除输入的字符串中空格：
	for(j=0;j<100;j++)
	{
		if(b[j] != ' ')
		{
			c[k] = b[j];
			k++;
		}
	}
	c[k]='0';
	printf("b去掉空格：%s",c);

	return 0;
}
