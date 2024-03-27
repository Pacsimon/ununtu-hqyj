#include "seq_list.h"

//创建顺序表的函数----通过返回值实现
list_t *create_list_1(){
    list_t *p = (list_t *)malloc(sizeof(list_t));
    if(NULL == p){
        printf("内存分配失败\n");
        return NULL;
    }
    memset(p, 0, sizeof(list_t));//把分配的空间清0
    return p;
}

//创建顺序表的函数----通过地址传参实现
int create_list_2(list_t **p){
    if(NULL == p){
        printf("入参为NULL\n");
        return -1;
    }
    *p = (list_t *)malloc(sizeof(list_t));
    if(NULL == *p){
        printf("内存分配失败\n");
        return -1;
    }
    memset(*p, 0, sizeof(list_t));//把分配的空间清0
    return 0;
}

//插入--尾插
int insert_list_by_tail(list_t *my_list, int data){
    if(NULL == my_list){
        printf("入参为NULL\n");
        return -1;
    }
    if(N == my_list->count){
        printf("表已满 插入失败\n");
        return -1;
    }
    my_list->s[my_list->count].data = data;
    my_list->count++;
    return 0;
}

//打印顺序表中所有元素----实际不需要，只是学习阶段用来看现象的
int print_list(list_t *my_list){
    if(NULL == my_list){
        printf("入参为NULL\n");
        return -1;
    }
    for(int i = 0; i < my_list->count; i++){
        printf("%d  ", my_list->s[i].data);
    }
    printf("\n");
    return 0;
}

//插入--任意位置插入
int insert_list_by_pos(list_t *my_list, int pos, int data){
    if(NULL == my_list){
        printf("入参为NULL\n");
        return -1;
    }
    if(N == my_list->count){
        printf("表已满 插入失败\n");
        return -1;
    }
    //对插入位置合理性做检查
    if(pos < 0 || pos > my_list->count){
        printf("插入位置不合理 插入失败\n");
        return -1;
    }
    //待插入位置及后面的元素依次向后移动一步
    for(int i = my_list->count-1; i >= pos; i--){
        my_list->s[i+1] = my_list->s[i];
    }
    //把数据插入待插入位置
    my_list->s[pos].data = data;
    my_list->count++;
    return 0;
}

//删除顺序表中的元素--尾删
int delete_list_by_tail(list_t *my_list){
    if(NULL == my_list){
        printf("入参为NULL\n");
        return -1;
    }
    if(0 == my_list->count){
        printf("表已空 删除失败\n");
        return -1;
    }
    //只需要将 count-- 即可
    my_list->count--;
    return 0;
}

//删除顺序表中的元素--任意位置删除
int delete_list_by_pos(list_t *my_list, int pos){
    //入参非NULL检查
    if(NULL == my_list){
        printf("入参为NULL\n");
        return -1;
    }
    //表空的检查
    if(0 == my_list->count){
        printf("表已空 删除失败\n");
        return -1;
    }
    //删除位置合理性的检查
    if(pos < 0  || pos >= my_list->count){
        printf("插入位置不合理 插入失败\n");
        return -1;
    }
    //把待删除位置后面的元素依次向前移动一步
    for(int i = pos; i < my_list->count-1; i++){
        my_list->s[i] = my_list->s[i+1];
    }
    my_list->count--;
    return 0;
}