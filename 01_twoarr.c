#include <stdio.h>

int main(int argc, const char *argv[])
{
	int num[3][2]={{1,2},{3,4},{5,6}};
	
	printf("&num = %d\n",&num);
	printf("&num[0][0] = %d\n",&num[0][0]);
	printf("&num+1 = %d\n",&num + 1);
	printf("&num[0][0]+1 = %d\n",&num[0][0]+1);
	printf("---------------------");
	printf("%p\n",&num[0]+1);
	
	return 0;
}
