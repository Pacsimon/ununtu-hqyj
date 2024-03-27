#include "sequential_list.h"

int main()
{
    //变量区
    int number=0;

    //创建表
    List_t *list_main = NULL;
    List_creat_Fun(&list_main);
    printf("表地址：%p\n",list_main);  
    list_main->count=0;     //insert->0  count++  1 2 3 4 5

    //向顺序表中插入元素--尾插
    List_insert_element_by_tail(list_main,79);  //79
    List_insert_element_by_tail(list_main,84);  //79 84
    List_insert_element_by_tail(list_main,90);  
    List_insert_element_by_tail(list_main,99);
    List_insert_element_by_tail(list_main,92);
    List_insert_element_by_tail(list_main,99);
    List_insert_element_by_tail(list_main,76);
    List_insert_element_by_tail(list_main,84);
    List_insert_element_by_tail(list_main,83);
    List_insert_element_by_tail(list_main,82);  //79 84 90 99 92 99 76 84 83 82
      
    //向顺序表中插入元素--任意位置插入
    List_insert_element_by_anywhere(list_main,1,100); //79 100 84 90 99 92 99 76 84 83 82
    List_insert_element_by_anywhere(list_main,3,66); //79 100 84 66 90 99 92 99 76 84 83 82

    //删除顺序表中的元素--尾删
    List_delete_element_by_tail(list_main);  //79 100 84 66 90 99 92 99 76 84 83
    List_delete_element_by_tail(list_main);  //79 100 84 66 90 99 92 99 76 84

    // //删除顺序表中的元素--任意位置删除
    List_delete_element_by_anywhere(list_main,2);   //79 100 66 90 99 92 99 76 84

    // //修改指定位置的元素    
    List_modify_element_by_position(list_main,3,10);    //79 100 66 10 99 92 99 76 84
    

    //查询指定位置的元素
    List_find_element_by_position(list_main,9,&number);
    List_find_element_by_position(list_main,3,&number);
    printf("%d位置元素为: %d\n",3,number);

    //向顺序表中插入元素--任意位置插入
    List_insert_element_by_anywhere(list_main,7,99); //79 100 66 10 99 92 99 99 76 84
    List_insert_element_by_anywhere(list_main,7,99); //79 100 66 10 99 92 99 99 99 76 84

    //顺序表元素剔重
    List_remove_same_element(list_main);    //79 100 66 10 99 92 76 84

    //顺序表元素排序 升序
    // List_sort_element(list_main);

    //清空顺序表
    // List_empty(list_main);

    //打印顺序表中所有元素
    List_print(list_main);

    //销毁顺序表
    // List_destroy(&list_main);

    free(list_main);
    list_main = NULL;
    
}