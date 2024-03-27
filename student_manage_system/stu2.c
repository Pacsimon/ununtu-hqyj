#include "stu.h"

int add_student(cls_t *cls)//增加学生信息
{
    int ret =0;
    if(cls->n >= (MAX_STU-1))
    return -1;
    //学生人数++
    (cls->n)++;
    //输入学生信息
input_retry:
    printf("input (name sex score) > ");
    ret = scanf("%s %c %d",cls->st[(cls->n)-1].name,&(cls->st[(cls->n)-1].sex),&(cls->st[(cls->n)-1].score));
    if(ret != 3)
    {
        printf("输入信息错误，请重试\n");
        goto input_retry;
    }
    while(getchar()!='\n');
    printf("向班级内添加学生成功.\n");
    return 0;
}


int delect_student(cls_t *cls)//按姓名删除学生
{
    int is_delete=0;
    int i=0,j=0,ret=0;
    char stu_name[20]={0};

    if(cls->n == 0)
    {
        printf("已经没有学生了");
        return -1;
    }
    printf("input delete student name:");
    scanf("%s",stu_name);
    while(getchar()!='\n');

    for(i=0;i<cls->n;i++)
    {
        if((ret = strcmp(stu_name,cls->st[i].name)) == 0)  //相等返回0  不相等
            is_delete = 1;
        if(is_delete)
        {
            cls->st[i]=cls->st[i+1];
            (cls->n)--;
            printf("删除成功 !\n");
        }  
		     
    }
    if(is_delete)
    {
    	memset(cls->st[(cls->n)].name,'\0',sizeof(cls->st[(cls->n)-1].name));
    	cls->st[(cls->n)].score=0;
    	cls->st[(cls->n)].sex='\0';
    	memset(cls->st[(cls->n)+1].name,'\0',sizeof(cls->st[(cls->n)-1].name));
    	cls->st[(cls->n)+1].score=0;
    	cls->st[(cls->n)+1].sex='\0';
	}
}


void modif_student(cls_t *cls)//按姓名修改学生
{
    char modify_name[20]={0};
    printf("intput modify name:");
    scanf("%s",modify_name);
    while(getchar()!='\n');

//    for(int i=0;i<cls->n;i++)
//    {
//        
//    }
}


// cheak_student(cls)//按姓名查询学生
// {
    
// }


// sort_student(cls)//排序学生分数
// {

// }


int show_student(cls_t *cls)//遍历现有所有学生
{
	int i=0; 
    printf("have %d students\n",(cls->n)+1);
    for(i=0;i<(cls->n);i++)
    {
        printf("%d:%-10s %c %d\n",i,cls->st[i].name,cls->st[i].sex,cls->st[i].score);
    }

}

