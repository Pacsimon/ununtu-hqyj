#include "link_queue.h"


//入栈
int my_push_stack(queue_t *A, queue_t *B, int data){
    if(NULL == A || NULL == B){
        return -1;
    }
    int A_push_data = 0;
    int B_push_data = 0;
    if (is_empty(A)){
        push_queue(A,data);
    }else{
        while (NULL == B->front){
            /* code */
        }
    }
    
}

//出栈
int my_pop_stack(queue_t *A, queue_t *B, int *data){
    
}




int main(int argc, const char *argv[])
{
    queue_t *my_queue = NULL;
    create_queue(&my_queue);
    printf("my_queue = %p\n", my_queue);//非NULL

    // //测试入队列
    push_queue(my_queue, 10);
    push_queue(my_queue, 20);
    push_queue(my_queue, 30);
    push_queue(my_queue, 40);
    print_queue(my_queue);//10 20 30 40

    // //测试出队列
    // int value = 0;
    // pop_queue(my_queue, &value);
    // printf("value = %d\n", value);//10
    // pop_queue(my_queue, &value);
    // printf("value = %d\n", value);//20
    // push_queue(my_queue, 60);
    // print_queue(my_queue);//30 40 60
    // pop_queue(my_queue, &value);
    // printf("value = %d\n", value);//30
    // pop_queue(my_queue, &value);
    // printf("value = %d\n", value);//40
    // pop_queue(my_queue, &value);
    // printf("value = %d\n", value);//60
    // pop_queue(my_queue, &value);//空

    // //测试清空
    // push_queue(my_queue, 100);
    // push_queue(my_queue, 200);
    // print_queue(my_queue);//100 200
    // clean_queue(my_queue);
    // print_queue(my_queue);//没有元素了

    // //测试销毁
    // destroy_queue(&my_queue);
    // printf("my_queue = %p\n", my_queue);//NULL
    
    return 0;
}