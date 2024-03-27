#include <stdio.h>

int main()
{
	//从键盘中输入一个字符，若为大写则转换为小写
	char ch;
	printf("请输入一个英文字符:");
	ch = getchar();
	if((ch>='a')&&(ch<='z'))
	{
		printf("这是小写英文字符，大写为%c\n",ch-32);
	}
	else if((ch>='A')&&(ch<='Z'))
	{
		printf("这是大写英文字符，小写为%c\n",ch+32);
	}

	return 0;
}
