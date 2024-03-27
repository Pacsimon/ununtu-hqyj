#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct {
    char name[20];
    int number[7];
    int score;
}stu_t;
 
int main()
{
    int loop=1,i;
    stu_t **p;
    stu_t student[70];
    *p=student;
// retry:
    // *p = (stu_t *)malloc(sizeof(student)*70);
    // if(student == NULL)
    // {
    //     printf("malloc memory error!");
    //     goto retry;
    // }
        
    // int student_number = 0;
    // char over_flag[100]={0};
    // int over_sum=0;
    // int score_all[70];
     
    // while(loop)
    // {
    //     printf("intput student message >\n");  //输入顺序zhangsan 2402101 99
         
    //     printf("name >");
    //     scanf("%s",student[student_number].name);
    //     while(getchar()!='\n');
         
    //     printf("number >");
    //     for(i=0;i<7;i++)
    //     {
    //         scanf("%d",&(student[student_number].number[i]));
    //     }
    //     while(getchar()!='\n');
         
    //     printf("sroce >");
    //     scanf("%d",&(student[student_number].score));
         
    //     printf("Continue input student message? (Y/########)");
    //     scanf("%s",over_flag);
    //     while(*over_flag)
    //     {
    //         if(*over_flag == '#')
    //         {
    //             (*over_flag)++;
    //             over_sum++;
    //         }
    //         if(over_sum > 5)
    //         {
    //             printf("input over!");
    //             loop=0;
    //             break;
    //         }
    //     }
    //     student_number++;
    // }
    // // for(int j=0;j<70;j++)
    // // {
    // //     score_all[j]=
    // // }
    // // score_all
    // free(p);
}