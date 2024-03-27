#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//约瑟夫环的练习 循环链表
//执行 ./a.out 时有两个参数  总人数  杀第几个

typedef struct Joseph_ring
{
    int count;
    struct Joseph_ring *next;
}Joseph_t;


int main(int argc,const char *argv[])
{
    if(3 != argc){
        printf("参数不足 ! ");
        return -1;
    }
    int all = atoi(argv[1]);
    int kill = atoi(argv[2]);
    int count_kill = 1;
    int kill_number = 0;
    Joseph_t *phead = (Joseph_t *)malloc(sizeof(Joseph_t));
    Joseph_t *pnew = NULL;
    Joseph_t *ptemp = phead;
    Joseph_t *plast = phead;
    phead->count = 1;
    phead->next = NULL;

    for(int i=2;i<=all;i++){
        pnew = (Joseph_t *)malloc(sizeof(Joseph_t));
        ptemp->next = pnew;
        ptemp = pnew;
        pnew->next = NULL;
        pnew->count = i;
    }
    ptemp->next = phead;
    
    while(phead != phead->next){
        if(count_kill == kill)
        {
            count_kill = 1;
            kill_number++;
            printf("第%d个 编号为%d\n",kill_number,phead->count);
            plast->next = phead->next;
            free(phead);
            phead = plast->next;
        } else {
            plast = phead;
            phead = phead->next;
            count_kill++;
        }
    }
    printf("最后一个编号为:%d\n",phead->count);
}




