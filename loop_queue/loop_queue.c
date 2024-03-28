#include "loop_queue.h"

int create_queue(queue_t **my_queue){
    if(NULL == my_queue){
        printf("创建队列入参为空！");
        return -1;
    }
    *my_queue = (queue_t *)malloc(sizeof(queue_t));
    if(NULL == my_queue){
        printf("未申请到内存！");
        return -1;
    }
    for(int i=0;i<N;i++){
        (*my_queue)->s[i] = 0;
    }
    (*my_queue)->front = 0;
    (*my_queue)->rear = 0;
}

int is_full(queue_t *my_queue){
    if(NULL == my_queue){
        printf("队列判满功能 入参为空！");
        return -1;
    }
    if(my_queue->front == (((my_queue->rear)+1)%N)){
        printf("队列已满！");
        return 0;
    }else{
        return 1;
    }
}
int push_queue(queue_t *my_queue, int data){
    if(NULL == my_queue){
        printf("入队列功能 入参为空！");
        return -1;
    }
    if(is_full(my_queue)){
        my_queue->s[my_queue->rear] = data;
        my_queue->rear = ((my_queue->rear)+1)%N;
    }
    return 0;
}
int is_empty(queue_t *my_queue){
    if(NULL == my_queue){
        printf("队列判空功能 入参为空！");
        return -1;
    }
    if(my_queue->front == my_queue->rear){
        printf("队列为空！");
        return 0;
    }else{
        return 1;
    }
}
int pop_queue(queue_t *my_queue, int *num){
    if(NULL == my_queue){
        printf("出队列功能 入参为空！");
        return -1;
    }
    if(!(is_empty(my_queue))){
        printf("队列为空！出队列失败");
        return -1;
    }else{
        *num = my_queue->s[my_queue->front];
        my_queue->s[my_queue->front] = 0;
        my_queue->front = ((my_queue->front)+1)%N;
    }
}
int clean_queue(queue_t *my_queue){
    if(NULL == my_queue){
        printf("清空队列功能 入参为空！");
        return -1;
    }
    if(!(is_empty(my_queue))){
        printf("队列为空！不需要清空");
        return -1;
    }else{
        while(my_queue->rear != my_queue->front){
            my_queue->s[((my_queue->rear)-1+N)%N] = 0;
            my_queue->rear = ((my_queue->rear)-1+N)%N;
        }
    }
}
int destroy_queue(queue_t **my_queue){
    if(NULL != my_queue){
        printf("销毁队列功能 入参为空！");
        return -1;
    }
}
int print_queue(queue_t *my_queue);