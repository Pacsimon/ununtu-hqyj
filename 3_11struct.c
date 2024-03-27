#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person{
    char name[30];
    char sex;
    int age;
};

// void input(struct Person a)

int main()
{
    struct Person p1;
    struct Person *p2;

    printf("input p1 message:\n");

    printf("name:");
    scanf("%s",p1.name);
    while(getchar()!='\n');

    printf("sex:");
    scanf("%c",&(p1.sex));
    while(getchar()!='\n');

    printf("age:");
    scanf("%d",&(p1.age));
    while(getchar()!='\n');

    p2=(struct Person *)malloc(sizeof(struct Person));
    printf("input p2 message:\n");

    printf("name:");
    scanf("%s",p2->name);
    while(getchar()!='\n');

    printf("sex:");
    scanf("%c",&(p2->sex));
    while(getchar()!='\n');

    printf("age:");
    scanf("%d",&(p2->age));
    while(getchar()!='\n');

    printf("name = %-10s,sex = %c,age = %d\n",p1.name,p1.sex,p1.age);
    printf("name = %-10s,sex = %c,age = %d\n",p2->name,p2->sex,p2->age);
    free(p2);
}