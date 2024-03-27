#ifndef __SEQ_LIST_H__
#define __SEQ_LIST_H__

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define N 10

//数据元素的结构体
typedef struct _Data{
    int data;//课上以每个数据元素只有一个数据项为例
            //如果有多个数据项 依次在这里罗列即可
}data_t;

//顺序表的结构体----数据对象的结构体
typedef struct _SEQ_LIST{
    data_t s[N];
    int count; //用来保存已有的数据元素的个数
}list_t;

list_t *create_list_1();
int create_list_2(list_t **p);
int insert_list_by_tail(list_t *my_list, int data);
int print_list(list_t *my_list);
int insert_list_by_pos(list_t *my_list, int pos, int data);
int delete_list_by_tail(list_t *my_list);
int delete_list_by_pos(list_t *my_list, int pos);

#endif