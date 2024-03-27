#include <stdio.h>

#define N 8+2
int main()
{
	int cx2 = 2;
	int cx3 = 4;
	unsigned int cx4 = -1;
	int point = 100;
	char cx1 = 'a';
	char ch1 = 'b',ch2 = 'c';
	printf("ch = %c\n",cx1);
	printf("--------------------------\n");
	printf("char占%ld个字符,short占%ld个字符,int占%ld个字符,long占%ld个字符,float占%ld个字符,double占%ld个字符\n",sizeof(char),sizeof(short),sizeof(int),sizeof(long),sizeof(float),sizeof(double));
	printf("%d",2*N);
	printf("十进制：%d,八进制：%o,带前缀的八进制：%#o\n",cx2,cx2,cx2);
	printf("十进制: %d,十六进制：%x，带前缀的十六进制：%#x\n",cx3,cx3,cx3);
	printf("cx4的十六进制：%#x，无符号数据：%u\n",cx4,cx4);
	printf("point 地址：%p\n",&point);
	

	return 0;
}



