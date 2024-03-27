#include "seq_list.h"

int main(int argc, const char *argv[])
{
    list_t *my_list = NULL;
    //my_list = create_list_1();
    //printf("my_list = %p\n", my_list);//非NULL

    create_list_2(&my_list);
    printf("my_list = %p\n", my_list);//非NULL

    //测试尾插
    insert_list_by_tail(my_list, 10);
    insert_list_by_tail(my_list, 20);
    insert_list_by_tail(my_list, 30);
    print_list(my_list); // 10 20 30

    //测试任意位置插
    insert_list_by_pos(my_list, 4, 100);//位置不合理
    insert_list_by_pos(my_list, 3, 100);
    insert_list_by_pos(my_list, 1, 200);
    print_list(my_list); // 10 200 20 30 100

    //测试尾删
    delete_list_by_tail(my_list);
    delete_list_by_tail(my_list);
    print_list(my_list); // 10 200 20

    //测试任意位置删除
    delete_list_by_pos(my_list, 3);//不合理
    delete_list_by_pos(my_list, 2);
    // delete_list_by_pos(my_list, 0);
    print_list(my_list); // 200

    return 0;
}