#include <stdio.h>

void mygets(char s[100],int n)
{
	int i,j=n;
	while((i<n-1)&&((ch = getchar()) != '\0')&&(ch != EOF))
		s[i++] = ch;
}
int main(int argc, const char *argv[])
{
	//str
	char s[100]={0};
	int n=3;
	printf("How many char do you want to enter:");
	scanf("%d",&n);
	mygets(s,n);
	printf("%s\n",s);
	return 0;
}

