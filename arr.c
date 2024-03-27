#include <stdio.h>

int main(int argc, const char *argv[])
{
	int min,sub;
	int arr[5] = {55,-2,-66,100,200};
	min = arr[0];	
	
	for(int i=0;i<5;i++)
	{
		if((i>1)&&(arr[i]<min))
		{
			min = arr[i];
			sub = i;
		}
	}
	printf("arr:%d %d\n",sub,min);
	return 0;
}
