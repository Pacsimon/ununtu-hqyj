#include <stdio.h>

int my_atoi(char s[])
{
	int i=0,j=0;
	int num_s[100]={0};
	int m=0;
	while(s[i]!='\0')
	{
		if((s[i]>='0')&&(s[i]<='9'))
		{
			num_s[j++] = s[i]-'0'; //0,1,2,3 
		}
	}
	do
	{
		for(int k=0;k<(sizeof(num_s-j)-1);k++)
		{
			num_s[j] *= 10;
			m += num_s[j];
		}
	}while(j--);
	printf("")
	
}


int main(int argc, const char *argv[])
{
	char s[100]={0};
	printf("input string:");
	scanf("%s",s);
	printf("num:%d",my_atoi(s));

	return 0;
}
