#include "link_list.h"

//创建链表节点的函数
int create_node(node_t **p, int data){
    if(NULL == p){
        printf("入参为NULL\n");
        return -1;
    }
    *p = (node_t *)malloc(sizeof(node_t));
    if(NULL == *p){
        printf("内存分配失败\n");
        return -1;
    }
    (*p)->data = data;
    (*p)->next = NULL;
    return 0;
}

//向链表中插入元素----头插
int insert_list_by_head(node_t *phead, int data){
    if(NULL == phead){
        printf("头插入参为NULL\n");
        return -1;
    }
    //创建新节点
    node_t *pnew = NULL;
    create_node(&pnew, data);
    //执行头插
    pnew->next = phead->next;
    phead->next = pnew;
    return 0;
}

//向链表中插入元素----尾插
int insert_list_by_tail(node_t *phead, int data){
    node_t *ptemp = phead;
    if(NULL == ptemp){
        printf("尾差入参为NULL\n");
        return -1;
    }
    while(NULL != ptemp->next) {
        ptemp = ptemp->next;
    }
    node_t *pnew = NULL;
    create_node(&pnew,data);
    ptemp->next = pnew;

    return 0;
}

//向链表中插入元素----任意位置插入
int insert_list_by_pos(node_t *phead, int pos, int data)  // 6
{
    node_t *ptemp = phead;
    node_t *plast = phead;
    int element_number = 0;
    int fine_pos_flag = 0;
    //入参非NULL检查
    if(NULL == ptemp){
        printf("任意位置插入入参为NULL\n");
        return -1;
    }
    //位置合理性检查(边找待插入位置的前一节点 边判断位置是否合理)
    if(0 > pos) {
        printf("任意位置插入的位置不合理！\n");
        return -1;
    } 
    while(NULL != ptemp->next) {
        ptemp = ptemp->next;
        element_number++;
        if(element_number == pos) {
            fine_pos_flag = 1;
            break;
        }
        plast = ptemp;
    }
    if((0 == fine_pos_flag)&&((element_number+1) == pos)) {
        insert_list_by_tail(phead,data);

    } else if(0 == fine_pos_flag) {
        printf("任意位置插入的位置不合理！\n");
        return -1;
    } 
    if(1 == fine_pos_flag) {
        //创建新节点
        node_t *pnew = NULL;
        create_node(&pnew,data);
        //执行插入操作
        pnew->next = plast->next;
        plast->next = pnew;
    }
    return 0;
}

//链表中删除元素----任意位置删除
int del_list_by_pos(node_t *phead, int pos)  
{
    node_t *ptemp = phead;
    node_t *pdel = NULL;
    node_t *plast = phead;
    int element_number = 0;
    int fine_pos_flag = 0;
    //入参非NULL检查
    if(NULL == ptemp){
        printf("任意位置删除入参为NULL\n");
        return -1;
    }
    //位置合理性检查
    if(0 > pos) {
        printf("任意位置删除的位置不合理！\n");
        return -1;
    }
    //执行删除操作
    while(NULL != ptemp->next) {
        ptemp = ptemp->next;
        element_number++;
        if(element_number == pos) {
            fine_pos_flag = 1;
            break;
        }
        plast = ptemp;
    }
    if(1 == fine_pos_flag) {
        pdel = ptemp;
        plast->next = ptemp->next;
        free(pdel);
        pdel = NULL;
    } else {
        printf("任意位置删除的位置不合理！\n");
        return -1;
    }
}

//排序链表中所有元素的函数  升序
int sort_list(node_t *phead){
    node_t *ptemp = phead;
    int temp=0;
    //排序链表函数入参非NULL检查
    if(NULL == ptemp){
        printf("排序链表入参为NULL\n");
        return -1;
    }
    //排序必要性检查
    if(NULL == ptemp->next || NULL == ptemp->next->next) {
        printf("链表不需要排序\n");
        return -1;
    }
    //排序
    node_t *p = phead->next;
    node_t *q = NULL;
    while(p){
        q = p->next;
        while(q){
            if(p->data > q->data) {
                temp = p->data;
                p->data = q->data;
                q->data = temp;  
            }   
            q = q->next;
        }
        p = p->next; 
    }
    return 0;
}

//链表翻转
int turn_list(node_t *phead){
    node_t *ptemp = phead->next;
    node_t *pmove = NULL;  //每次要移动的
    node_t *plastone = phead->next;  //初始第二个位置
    if(NULL == ptemp){
        printf("链表翻转入参为NULL\n");
        return -1;
    }
    //链表翻转必要性检查
    if(NULL == ptemp->next || NULL == ptemp->next->next) {
        printf("链表不需要翻转\n");
        return -1;
    }
    //执行翻转
    while(NULL != plastone->next){
        pmove = plastone->next;

        plastone->next = pmove->next;
        phead->next = pmove;
        pmove->next = ptemp;

        ptemp = pmove;
    }
}

//链表剔重
int remove_same_list(node_t *phead){
    node_t *ptemp = phead;
    if(NULL == ptemp){
        printf("链表剔重入参为NULL\n");
        return -1;
    }
    //链表翻转必要性检查
    if(NULL == ptemp->next || NULL == ptemp->next->next) {
        printf("链表不需要剔重\n");
        return -1;
    }
    //执行剔重
    node_t *p = ptemp->next;
    node_t *q = p->next;
    node_t *del = NULL;
    node_t *qlast = p;
    node_t *qlastlast = qlast;
    while(NULL != p) {
        qlast = p;
        q = p->next;
        while(NULL != q) {
            if(p->data == q->data)
            {
                del = q;
                qlast->next = q->next;
                free(del);
                del = NULL;
                q = qlast;
                qlast = qlastlast;
            }
            qlast = q;
            qlastlast = qlast;
            q = q->next;
        }
        p=p->next;
    }
}

//打印链表中所有元素的函数
int print_list(node_t *phead){
    node_t *ptemp = phead;
    if(NULL == phead){
        printf("入参为NULL\n");
        return -1;
    }
    while(NULL != ptemp->next)
    {
        ptemp = ptemp->next;
        printf("%d ",ptemp->data);
    }
    printf("\n");
    return 0;
}