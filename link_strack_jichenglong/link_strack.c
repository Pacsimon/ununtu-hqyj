#include "link_stack.h"

int create_stack(stack_t **my_stack){
    if(NULL == my_stack){
        printf("入参为NULL\n");
        return -1;
    }
    *my_stack = (stack_t *)malloc(sizeof(stack_t));
    if(NULL == (*my_stack)){
        printf("内存分配失败\n");
        return -1;
    }
    (*my_stack)->top=NULL;
    (*my_stack)->count=0;
    return 0;
}

int push_stack(stack_t *my_stack, char data){
    if(NULL == my_stack){
        printf("入参为NULL\n");
        return -1;
    }
    node_t *pnew=NULL;
    pnew = (node_t *)malloc(sizeof(node_t));
    pnew->data = data;
    pnew->next=my_stack->top;
    my_stack->top=pnew;
    my_stack->count++;
    return 0;

}

int print_stack(stack_t *my_stack){
    if(NULL == my_stack){
        printf("入参为NULL\n");
        return -1;
    }
    node_t *p=my_stack->top;
    while(NULL != p)
    {
        printf("%d  ",p->data);
        p=p->next;
    }
    putchar(10);
    return 0; 
}

int is_empty(stack_t *my_stack){
    if(NULL == my_stack){
        printf("入参为NULL\n");
        return -1;
    }
    if(NULL == my_stack->top)
        return 1;
    else
        return 0;
}

int pop_stack(stack_t *my_stack, int *num){
    if(NULL == my_stack || NULL == num){
        printf("入参为NULL\n");
        return -1;
    }
    //判断栈空
    if(is_empty(my_stack)){
        printf("栈空 出栈失败\n");
        return -1;
    }
    *num = my_stack->top->data;
    node_t *p = my_stack->top;
    my_stack->top = p->next;
    my_stack->count--;
    free(p);
    p = NULL;
    return 0;
}

int clean_stack(stack_t *my_stack){
    if(NULL == my_stack){
        printf("入参为NULL\n");
        return -1;
    }
    node_t *pdel = NULL;
    while(NULL != my_stack->top){
        pdel = my_stack->top;
        my_stack->top = pdel->next;
        free(pdel);
    }
    pdel = NULL;
    my_stack->count = 0;
    return 0;
}

int destroy_stack(stack_t **my_stack){
    if(NULL == my_stack || NULL == *my_stack){
        printf("入参为NULL\n");
        return -1;
    }
    clean_stack(*my_stack);
    free(*my_stack);
    *my_stack = NULL;
    return 0;
}
