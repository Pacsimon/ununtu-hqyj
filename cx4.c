#include <stdio.h>

int main()
{
	//从键盘中输入两个数字，一个字母，(13+8,6+7),如果输入的是加法，就打印出计算结果。
	int a=0,b=0;
	char cal;
	scanf("%d",&a);
	cal = getchar();
	scanf("%d",&b);
	if(cal == '+')
		printf("%d\n",a+b);

	return 0;
}
