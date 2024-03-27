#ifndef __STU_H__
#define __STU_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STU 50

#define ADD_STU 1  //增加学生信息
#define DEL_STU 2  //按姓名删除学生
#define MOD_STU 3  //按姓名修改学生
#define CHK_STU 4  //按姓名查询学生
#define SOT_STU 5  //排序学生分数
#define SHW_STU 6  //遍历现有所有学生
#define QIT_STU 7  //退出系统

typedef struct {
    char name[20]; //姓名 20
    char sex;      //性别 1
    int score;     //分数 4
}stu_t;

typedef struct{
    stu_t st[MAX_STU];  //班级内学生信息结构体
    int n;        //现有学生数量 4 
}cls_t;


int add_student(cls_t *cls);//增加学生信息
int show_student(cls_t *cls);//
int delect_student(cls_t *cls);//按姓名删除学生
void modif_student(cls_t *cls);// 按姓名修改学生

#endif