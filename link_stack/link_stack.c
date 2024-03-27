#include "link_stack.h"

int create_stack(stack_t **my_stack){
    //入参判断
    if(NULL == my_stack){
        printf("链式栈创建入参为空！\n");
        return -1;
    }
    //创建链式栈
    *my_stack = (stack_t *)malloc(sizeof(stack_t));
    if(NULL == *my_stack){
        printf("链式栈创建失败内存不足！\n");
        return -1;
    }
    (*my_stack)->top = NULL;
    (*my_stack)->count = 0;
}

int push_stack(stack_t *my_stack, char data){  //入栈
    //入参判断
    if(NULL == my_stack){
        printf("链表节点创建入参为空！\n");
        return -1;
    }
    //创建链表节点
    node_t *pnew = NULL;
    node_t *ptemp = my_stack->top;
    pnew = (node_t *)malloc(sizeof(node_t));
    if(NULL == pnew){
        printf("链表节点创建失败内存不足！\n");
        return -1;
    }
    if(NULL == ptemp){
        my_stack->top = pnew;
        pnew->next = NULL;
        pnew->data = data;
    } else {
        pnew->next = ptemp;
        my_stack->top = pnew;
        pnew->data = data;
    }
    // printf("链式栈入栈完成\n");
}

int print_stack(stack_t *my_stack){
    if(NULL == my_stack){
        printf("打印入参为空！\n");
        return -1;
    }
    if(0 == is_empty(my_stack)){
        printf("链式栈为空！无打印内容\n");
        return -1;
    }
    node_t *ptemp = my_stack->top;
    while(NULL != ptemp){

        printf("%c ",ptemp->data);
        ptemp = ptemp->next;
    }
    printf("\n");
}

int is_empty(stack_t *my_stack){
    if(NULL == my_stack){
        printf("链式栈为空！\n");
        return -1;
    }
    int is = (NULL != my_stack->top) ? 1: 0;

    return is;
}

int pop_stack(stack_t *my_stack, char *num){  //出栈
    if(NULL == my_stack){
        printf("出栈入参为空！");
        return -1;
    }
    if(0 == is_empty(my_stack)){
        printf("链式栈为空！没有可出栈数据\n");
        return -1;
    }
    node_t *ptemp = my_stack->top;
    *num = ptemp->data;
    my_stack->top = ptemp->next;
    free(ptemp);
    ptemp = NULL;
    // printf("链式栈出栈完成\n");
    return 0;
}

int clean_stack(stack_t *my_stack){
    if(NULL == my_stack){
        // printf("清空栈入参为空！\n");
        return -1;
    }
    if(0 == is_empty(my_stack)){
        // printf("链式栈为空！不需要再次清空\n");
        return -1;
    }
    node_t *ptemp = NULL;
    while (NULL != my_stack->top)
    {
        ptemp = my_stack->top;
        my_stack->top = ptemp->next;
        free(ptemp);
        ptemp = NULL;
    }
    // printf("链式栈已清空\n");
    return 0;
}

int destroy_stack(stack_t **my_stack){
    if(NULL == my_stack){
        // printf("销毁入参为空！\n");
        return -1;
    }
    clean_stack(*my_stack);
    free(*my_stack);
    *my_stack = NULL;
    // printf("链式栈已销毁！\n");
    return 0;
}