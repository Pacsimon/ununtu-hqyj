#include <stdio.h>

#define N 5

int main(int argc, const char *argv[])
{
	int arr[5] = {55,-2,-66,100,200};
	int swap;	
#if 0
	//普通排序	当前一位与后面几位相比较
	for(int i=0;i<N-1;i++)
	{
		for(int j=i+1;j<5-i;j++)
		{
			if((arr[i] > arr[j]))
			{
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
		}
	}
#else
	//冒泡排序  相邻两个比较
	for(int i=0;i<N-1;i++)
	{
		for(int j=0;j<N-i;j++)
		{
			
		}
	}
#endif
	for(int k=0;k<5;k++)
		printf("arr:%d\t",arr[k]);
	return 0;
}
