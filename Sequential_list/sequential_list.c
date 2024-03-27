#include "sequential_list.h"

//创建表
int List_creat_Fun(List_t **list) {
    int retry_count = 0;
    if(NULL == list) {
        printf("传入空地址！\n");
        return -1;
    }
    else {
        //do nothing
    }
retry:
    retry_count++;
    *list = (List_t *)malloc(sizeof(List_t));
    if(NULL == list) {
        if(retry_count < 5)
            goto retry;
        else {
            printf("表创建失败！内存不足！\n");
            return 0;
        }
    }
    else
        return 1;
}

//向顺序表中插入元素--尾插
int List_insert_element_by_tail(List_t *list,int insert_data) {
    //空地址判断
    if(NULL == list) {
        printf("传入空地址！\n");
        return -1;
    }
    else {
        //do nothing
    }
    
    list->E[list->count].data = insert_data;
    list->count++;
    return 0;
}

//向顺序表中插入元素--任意位置插入
int List_insert_element_by_anywhere(List_t *list,int position,int insert_data) {
    //空地址判断
    if(NULL == list) {
        printf("传入空地址！\n");
        return -1;
    }
    else {
        //do nothing
    }
    //非空判断
    if(0 == list->count) {
        printf("传入表为空！\n");
        return 0;
    }
    else {
        //do nothing
    }
    //插入位置合理性判断
    if((position < 0) || (position >= list->count)) {
        printf("插入位置不合理！\n");
        return -2;
    }
    else {
        //do nothing
    }
    // printf("list->count:%d\n",list->count);
    for(int i=list->count;i>position;i--) {
        list->E[i].data = list->E[i-1].data;
    }
    list->E[position].data = insert_data;
    list->count++;
    return 0;
}

//删除顺序表中的元素--尾删
int List_delete_element_by_tail(List_t *list) {
    //空地址判断
    if(NULL == list) {
        printf("传入空地址！\n");
        return -1;
    }
    else {
        //do nothing
    }
    //非空判断
    if(0 == list->count) {
        printf("传入表为空不能再删除！\n");
        return 0;
    }
    else {
        //do nothing
    }
    list->count--;
    return 0;
}

//删除顺序表中的元素--任意位置删除
int List_delete_element_by_anywhere(List_t *list,int position) {
    //空地址判断
    if(NULL == list) {
        printf("传入空地址！\n");
        return -1;
    }
    else {
        //do nothing
    }
    //非空判断
    if(0 == list->count) {
        printf("传入表为空不能再删除！\n");
        return 0;
    }
    else {
        //do nothing
    }
    //删除位置合理性判断
    if((position < 0) || (position >= list->count)) {
        printf("删除位置不合理！\n");
        return -2;
    }else {
        //do nothing
    }
    for(int i=position;i<list->count-1;i++)
        list->E[i].data = list->E[i+1].data;
    list->count--;
    return 0;
}

//修改指定位置的元素
int List_modify_element_by_position(List_t *list,int position,int modify_data) {
    //空地址判断
    if(NULL == list) {
        printf("传入空地址！\n");
        return -1;
    }
    else {
        //do nothing
    }
    //查找位置的合理性判断
    if((position < 0) || (position >= list->count)) {
        printf("修改位置不合理！\n");
        return -2;
    }else {
        //do nothing
    }
    list->E[position].data = modify_data;
    return 0;
}

//查询指定位置的元素
int List_find_element_by_position(List_t *list,int position,int *num) {
    //空地址判断
    if(NULL == list) {
        printf("传入空地址！\n");
        return -1;
    }
    else {
        //do nothing
    }
    //查找位置的合理性判断
    if((position < 0) || (position >= list->count)) {
        printf("查找位置不合理！\n");
        return -2;
    }else {
        //do nothing
    }
    *num = list->E[position].data;
    return 0;
}

//顺序表元素排序 升序
int List_sort_element(List_t *list) {
    //空地址判断
    if(NULL == list) {
        printf("传入空地址！\n");
        return -1;
    }
    else {
        //do nothing
    }
    //排序合理性判断
    if(list->count <= 1) {
        printf("不需要排序！\n");
        return -2;
    }else {
        //升序排序
        for(int i=0;i<(list->count)-1;i++) {
            for(int j=0;j<(list->count)-1-i;j++) {
                if(list->E[j].data>list->E[j+1].data) {
                    list->E[j].data ^= list->E[j+1].data;
                    list->E[j+1].data ^= list->E[j].data;
                    list->E[j].data ^= list->E[j+1].data;
                }
            }
        }
    }
    return 0;
}

//顺序表元素剔重
int List_remove_same_element(List_t *list) {
    int store=-1;
    //空地址判断
    if(NULL == list) {
        printf("传入空地址！\n");
        return -1;
    }
    else {
        //do nothing
    }
    //剔重合理性判断
    if(list->count <= 1) {
        printf("不需要剔重！\n");
        return -2;
    }else {
        for(int i=0;i<(list->count)-1;i++) {
            for(int j=i+1;j<list->count;j++) {
                if(list->E[i].data == list->E[j].data) {
                    List_delete_element_by_anywhere(list,j);
                    j--;
                }
            }
        }
    }
    return 0;
}

//清空顺序表
int List_empty(List_t *list) {
    //空地址判断
    if(NULL == list) {
        printf("传入空地址！\n");
        return -1;
    }
    else {
        //do nothing
    }
    //非空判断
    if(0 == list->count) {
        printf("传入表为空不需要再清空！\n");
        return 0;
    }
    else {
        //do nothing
    }
    list->count=0;
    return 0;
}

//销毁顺序表
int List_destroy(List_t **list) {
    //空地址判断
    if(NULL == list) {
        printf("传入空地址！\n");
        return -1;
    }
    else {
        //do nothing
    }
    //非空判断
    if(0 == (*list)->count) {
        free(*list);
        *list = NULL;
        return 0;
    }
    else {
        printf("传入表不为空 不可以销毁！\n");
        return 0;
    }
}

int List_print(List_t *list) {
    //空地址判断
    if(NULL == list) {
        printf("传入空地址！\n");
        return -1;
    }
    else {
        //do nothing
    }
    //非空判断
    if(0 == list->count) {
        printf("传入表为空！\n");
        return 0;
    }
    else {
        //do nothing
    }
    for(int i=0;i<list->count;i++) {
        printf("%2d:",i);
        printf("%d\n",list->E[i].data);
    }
}







