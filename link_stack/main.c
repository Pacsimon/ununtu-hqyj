#include "link_stack.h"


int main(int argc, const char *argv[])
{
    int num = 0;
    char ctemp = '\0';
    stack_t *my_stack = NULL;
    create_stack(&my_stack);
    char s[100] = {0};
    printf("please input string >> ");
    scanf("%s",s);
    while(getchar()!='\n');

    while('\0' != s[num]){
        if(s[num] == '{' || s[num] == '(' || s[num] == '[' || s[num] == '<'){
            push_stack(my_stack,s[num]);
        }
        if(s[num] == '}'){
            pop_stack(my_stack,&ctemp);
            if('{' != ctemp){
                printf("%c不匹配\n",ctemp);
            }
        }
        if(s[num] == ')'){
            pop_stack(my_stack,&ctemp);
            if('(' != ctemp){
                printf("%c不匹配\n",ctemp);
            }
        }
        if(s[num] == ']'){
            pop_stack(my_stack,&ctemp);
            if('[' != ctemp){
                printf("%c不匹配\n",ctemp);
            }
        }
        if(s[num] == '>'){
            pop_stack(my_stack,&ctemp);
            if('<' != ctemp){
                printf("%c不匹配\n",ctemp);
            }
        }
        num++;
    }
    if(NULL != my_stack->top){
        pop_stack(my_stack,&ctemp);
        printf("%c不匹配\n",ctemp);
    }  else {
        printf("匹配 ! \n");
    }
    destroy_stack(&my_stack);
    return 0;
}

















    // stack_t *my_stack = NULL;
    // create_stack(&my_stack);
    // printf("my_stack = %p\n", my_stack);// 非NULL

    // // //测试入栈
    // push_stack(my_stack, 'c');
    // push_stack(my_stack, 'd');
    // push_stack(my_stack, 'e');
    // print_stack(my_stack);  // e d c

    // // //测试出栈
    // char value = '0';
    // pop_stack(my_stack, &value);
    // printf("value = %c\n", value);// e
    // pop_stack(my_stack, &value);
    // printf("value = %c\n", value);// d
    // push_stack(my_stack, 'f');
    // pop_stack(my_stack, &value);
    // printf("value = %c\n", value);// f
    // pop_stack(my_stack, &value);
    // printf("value = %c\n", value);// c
    // pop_stack(my_stack, &value);//栈空

    // // //测试清空
    // push_stack(my_stack, 'v');
    // push_stack(my_stack, 'm');
    // print_stack(my_stack);  // m v
    // clean_stack(my_stack);
    // print_stack(my_stack);  // 没有元素了

    // // //测试销毁
    // destroy_stack(&my_stack);
    // printf("my_stack = %p\n", my_stack);// NULL