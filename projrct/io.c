#include "io.h"

int input_number(void)
{
    int n,ret;
retry:
    printf("input n > ");
    ret = scanf("%d",&n);
    
    if((ret != 1)|| (ret <=0)){
    printf("input error,try again\n");

    while(getchar()!='\n');
        goto retry;
    }
    while(getchar()!='\n');

    return n;
}

