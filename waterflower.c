#include <stdio.h>

int main(int argc, const char *argv[])
{
	int num=0;
	int ret=0;
	int g=0,s=0,b=0;
retry:
	printf("输入一个数 >> ");
	ret = scanf("%d",&num);
	if(ret != 1)
		goto retry;
	if((ret == 1)&&(num>=100)&&(num<=999))
	{
		while(getchar()!='\n');
		g = num % 10;
		s = (num /10) %10;
		b = num /100;
		if((g*g*g+s*s*s+b*b*b) == num)
			printf("是水仙花数\n");
		else
			printf("不是水仙花数\n");
	}
	
	return 0;
}
