#include <stdio.h>

int mystrlen(char a[100])
{
	int i=0;
	while(a[i])i++;
	return i;
}

int mystrcmp(char s1[100],char s2[100])
{
	int i=0,my_case=0;
	if(mystrlen(s1) == mystrlen(s2))
	{
		while(s1[i] != '\0')
		{
			if(s2[i]>s1[i]) //3
				return s1[i]-s2[i];
			i++;
		}
		if(i == mystrlen(s1)) //1
			return 0;
	}
	else
	{
		while(s1[i] != '\0' || s2[i] != '\0')
		{
			if((s1[i]<s2[i])&&(s1[i]=='\0')) //2
				return '\0'-s2[i];
			if((s1[i]>s2[i])&&(s1[i]!='\0')&&(s2[i]!='\0')) //4
				return s1[i]-s2[i];
			i++;
		}
	}
}

int main(int argc, const char *argv[])
{	
	char s1[100]={0};
	char s2[100]={0};
	printf("enter s1:");
	scanf("%s",s1);
	printf("enter s2:");
	scanf("%s",s2);

	printf("back:%d\n",mystrcmp(s1,s2));
	return 0;
}
