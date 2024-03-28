#ifndef __LINK_QUEUE_H__
#define __LINK_QUEUE_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//链表节点结构体
typedef struct _Node{
    int data;
    struct _Node *next;
}node_t;

//链式队列的结构体
typedef struct _Queue{
    node_t *front;
    node_t *rear;
}queue_t;

int create_queue(queue_t **my_queue);
int push_queue(queue_t *my_queue, int data);
int is_empty(queue_t *my_queue);
int pop_queue(queue_t *my_queue, int *num);
int clean_queue(queue_t *my_queue);
int destroy_queue(queue_t **my_queue);
int print_queue(queue_t *my_queue);

#endif