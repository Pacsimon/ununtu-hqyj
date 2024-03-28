#include "link_queue.h"

int create_queue(queue_t **my_queue){
    if(NULL == my_queue){
        printf("create_queue input NULL");
        return -1;
    }
    *my_queue = (queue_t *)malloc(sizeof(queue_t));
    if(NULL == *my_queue){
        printf("malloc error !");
        return -1;
    }
    (*my_queue)->front = NULL;
    (*my_queue)->rear = NULL;
    return 0;
}
int push_queue(queue_t *my_queue, int data){  //尾部入队列
    if(NULL == my_queue){
        printf("push_queue input NULL");
        return 0;
    }
    node_t *pnew = (node_t *)malloc(sizeof(node_t));
    pnew->data = data;
    pnew->next = NULL;
    if(NULL == my_queue->front){
        my_queue->front = pnew;
        my_queue->rear = pnew;
    }else{
        my_queue->rear->next = pnew;
        my_queue->rear = pnew;
    }
    
}
int is_empty(queue_t *my_queue){
    if(NULL == my_queue){
        printf("is_empty input NULL");
        return 0;
    }
    return (NULL == my_queue->front && NULL == my_queue->rear) ? 1 : 0;
}
int pop_queue(queue_t *my_queue, int *num){  //头部出队列
    if(NULL == my_queue){
        printf("pop_queue input NULL");
        return 0;
    }
    if(is_empty(my_queue)){
        printf("queue is NULL ! pop_queue error!");
        return 0;
    }
    node_t *pout = my_queue->front;
    my_queue->front = my_queue->front->next;
    free(pout);
    pout = NULL;

}
int clean_queue(queue_t *my_queue){
    if(NULL == my_queue){
        printf("clean_queue input NULL");
        return 0;
    }
    node_t *pdel = NULL;
    while (NULL != my_queue->front){
        pdel = my_queue->front;
        my_queue->front = my_queue->front->next;
        free(pdel);
    }
}
int destroy_queue(queue_t **my_queue){
    if(NULL == my_queue){
        printf("destroy_queue input NULL");
        return 0;
    }
    clean_queue(*my_queue);
    free(*my_queue);
    *my_queue = NULL;
}
int print_queue(queue_t *my_queue){
    if(NULL == my_queue){
        printf("print_queue input NULL");
        return 0;
    }
    if(is_empty(my_queue)){
        printf("queue is NULL ! print_queue error!");
        return 0;
    }
    node_t *ptemp = my_queue->front;
    while(ptemp != my_queue->rear->next){
        printf("%d ",ptemp->data);
        ptemp = ptemp->next;
    }
    printf("\n");
}