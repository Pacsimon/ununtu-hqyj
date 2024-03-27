#include <stdio.h>
	int main(void)
	{ 
		  char* p = NULL;
		  char* tmp = "12345678";
		  p = (char* )(tmp+4);
		  //p[-1] = ?,   p[-5] = ?。     
		  // 4  8
		  printf("-%c-%c-\n",p[-1],p[-5]);
		  return 0;
	}