#include <stdio.h>
#include <stdlib.h>
	int main(void)
	{ 
		  char* data = "12345678";
		  short* tmp = NULL; 
		  char p[6] = {0};
	 
		  tmp = (short *)&p[2];  //
		  *tmp = atoi(&data[4]); 
		  //p[0] = ?,   p[1] = ?,  p[2] = ?,    
		  //p[3] = ?,    p[4] = ?,  p[5] = ?。      
			for(int i=0;i<6;i++)
			{
				printf("%d\n",p[i]);
			}
		  return 0;
	}