#include <stdio.h>

int main()
{
	//从键盘中输入一个年份，判断是平年还是闰年
	
	int year;
	printf("请输入一个年份：");
	scanf("%d",&year);
	if((((((((year % 4 == 0)&&(year % 100 != 0))||(year % 400 == 0)))))))
		printf("%d年是闰年！\n",year);
	else
		printf("%d年是平年！\n",year);

	return 0;
}
