#include "link_list.h"

int main(int argc, const char *argv[])
{
    node_t *phead = NULL;
    create_node(&phead, -1);
    printf("phead = %p\n", phead);// 非NULL

    //测试头插
    insert_list_by_head(phead, 10);
    insert_list_by_head(phead, 20);
    insert_list_by_head(phead, 30);

    insert_list_by_tail(phead, 40);
    insert_list_by_tail(phead, 50);
    insert_list_by_tail(phead, 60);
    print_list(phead);// 30 20 10 40 50 60

    insert_list_by_pos(phead,8,100);  //不合理
    insert_list_by_pos(phead,7,100);  //30 20 10 40 50 60 100 
    insert_list_by_pos(phead,4,200);
    print_list(phead);// 30 20 10 200 40 50 60 100

    del_list_by_pos(phead,9);
    del_list_by_pos(phead,8);
    del_list_by_pos(phead,2);
    print_list(phead);  //30 10 200 40 50 60 

    sort_list(NULL);   
    sort_list(phead);
    print_list(phead);  //10 30 40 50 60 200 

    insert_list_by_tail(phead, 40);
    insert_list_by_tail(phead, 40);
    insert_list_by_tail(phead, 40);
    insert_list_by_head(phead, 40); //40 10 30 40 50 60 200 40 40 40 
    insert_list_by_pos(phead,2,40);
    insert_list_by_pos(phead,2,40);
    print_list(phead);  //40 40 40 10 30 40 50 60 200 40 40 40 
    remove_same_list(NULL); 
    remove_same_list(phead); 
    print_list(phead);  //40 10 30 50 60 200

    // turn_list(phead);
    // print_list(phead);  //200 60 50 30 10 40

    // turn_list(phead);
    // print_list(phead);  //200 60 50 30 10 40
    return 0;
}