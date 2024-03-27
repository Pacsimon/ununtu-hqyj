#ifndef __LINK_LIST_H__
#define __LINK_LIST_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//链表节点的结构体
typedef struct _Node{
    int data;   //数据域以int为例 如果有多个可以自己封装结构体
                //或者直接在此处罗列也行
    struct _Node *next;//指针域 用来指向下一节点的首地址
                //注意：此处不能使用 node_t 因为还不认识呢
}node_t;

int create_node(node_t **p, int data);

int insert_list_by_head(node_t *phead, int data);
int insert_list_by_tail(node_t *phead, int data);

int insert_list_by_pos(node_t *phead, int pos, int data);

int del_list_by_pos(node_t *phead, int pos);
int sort_list(node_t *phead);

int turn_list(node_t *phead);
int remove_same_list(node_t *phead);
int print_list(node_t *phead);

#endif