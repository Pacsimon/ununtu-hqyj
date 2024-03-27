#ifndef __LINK_STACK_H__
#define __LINK_STACK_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//链表节点结构体
typedef struct _Node{
    char data;
    struct _Node *next;
}node_t;

//链式栈的结构体
typedef struct _Stack{
    node_t *top;
    int count;
    //其他属性信息
}stack_t;

int create_stack(stack_t **my_stack);           //创建
int push_stack(stack_t *my_stack, char data);    //入栈
int print_stack(stack_t *my_stack);             //打印
int is_empty(stack_t *my_stack);                //判空
int pop_stack(stack_t *my_stack, char *num);     //出栈
int clean_stack(stack_t *my_stack);             //清栈
int destroy_stack(stack_t **my_stack);          //销栈

#endif