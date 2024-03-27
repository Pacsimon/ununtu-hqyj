#include "stu.h"

int main()
{
    //变量
    int malloc_fail_num = 0;
    int loop = 1;
    int chose=0;
    //创建班级结构体
    cls_t *cls;
    //申请班级结构体内存
retry:
    cls = (cls_t *)malloc(sizeof(*cls));  //1404  sizeof(*cls)
    malloc_fail_num++;
    if(cls == NULL)
    {
        while(malloc_fail_num <= 5)
        {
            printf("malloc memory error!\n");
            goto retry;
        }
        return -1;
    }
 
    cls->n = 0;
    while(loop)	
    {
        puts("---------------欢迎进入学生管理系统------------------");
        puts("--1.添加 2.删除 3.修改 4.查询 5.排序 6.遍历  7.退出--");
        puts("---------------欢迎进入学生管理系统------------------");
    
        printf("input your chose :");
        scanf("%d",&chose);
        while(getchar()!='\n');

        switch (chose)
        {
            case ADD_STU:
                add_student(cls);
                break;
            case DEL_STU:
                delect_student(cls);
                break;
             case MOD_STU:
                 modif_student(cls);
                 break;
            // case CHK_STU:
            //     cheak_student(cls);
            //     break;
            // case SOT_STU:
            //     sort_student(cls);
            //     break;
            case SHW_STU:
                show_student(cls);
                break;
            case QIT_STU:
                printf("Quit student manage system...\n");
                loop=0;
                break;

            default:
                printf("error! please input again\n");
                break;
        }
    }
    
    free(cls);
    return 0;
}