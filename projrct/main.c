#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n;
    int *p;

    //1.输入成员个数
    n = input_number();
    //2.申请内存
    p = malloc_memory(n);
    if(p == NULL)
    return -1;
    //3.输入数据
    input_data(p,n);
    //4.使用冒泡排序方法对数据排序
    bubble_sort(p,n);
    //5.成员遍历
    data_show(p,n);
    //6.释放内存
    free_memory(p);
    return 0;
    
}