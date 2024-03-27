#include"link_stack.h"

int main(int argc, char const *argv[])
{
    stack_t *my_stack1=NULL;
    create_stack(&my_stack1);
    stack_t *my_stack2=NULL;
    create_stack(&my_stack2);
    stack_t *my_stack3=NULL;
    create_stack(&my_stack3);
    char *s = (char *)malloc(100*sizeof(char));
    puts("请输入一组字符串>>>");
    scanf("%s",s);
    while(getchar()!='\n');
#if 1
    int i=0,j=0,k=0,m=0;
    while('\0' != s[i]){
        if (j<i)
            j=i;
        if(s[j] == '{'){
            while(s[j]!='}'|| s[j]!='\0'){
                 push_stack(my_stack1, s[j]);
                 j++;
            }
            while(s[j] == '}'){
                clean_stack(my_stack1);
            }
               
        }
        if (k<i)
            k=i;
        if(s[k] == '['){
            while(s[k]!=']'|| s[k]!='\0'){
                 push_stack(my_stack2, s[k]);
                 k++;
            }
            while(s[k] == ']'){
                clean_stack(my_stack2);
            }
               
        }
        if (m<i)
            m=i;
        if(s[m] == '('){
            while(s[m] != ')'|| s[m]!='\0'){
                 push_stack(my_stack3, s[m]);
                 m++;
            }
            while(s[m] == ')'){
                clean_stack(my_stack3);
            }
               
        }
        i++;
    }
    if(!is_empty(my_stack1))
        printf("所输入的字符串中 '{}' 不匹配\n");
    if(!is_empty(my_stack2))
        printf("所输入的字符串中 '[]' 不匹配\n");
    if(!is_empty(my_stack3))
        printf("所输入的字符串中 '()' 不匹配\n");
#endif
    return 0;
}
