#ifndef __SEQUENTIAL_LIST_H__
#define __SEQUENTIAL_LIST_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 20

typedef struct _DATA{
    int data;
}Data_t;

typedef struct _SEQ_LIST{
    Data_t E[NUM];
    int count;
}List_t;

int List_creat_Fun(List_t **list);

int List_insert_element_by_tail(List_t *list,int insert_data);
int List_insert_element_by_anywhere(List_t *list,int position,int insert_data);

int List_delete_element_by_tail(List_t *list);
int List_delete_element_by_anywhere(List_t *list,int position);

int List_modify_element_by_position(List_t *list,int position,int modify_data);
int List_find_element_by_position(List_t *list,int position,int *num);

int List_sort_element(list_main);
int List_remove_same_element(list_main);

int List_empty(List_t *list);
int List_destroy(List_t **list);

int List_print(List_t *list);

#endif