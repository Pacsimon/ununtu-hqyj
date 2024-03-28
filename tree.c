#include <stdio.h>
#include <stdlib.h>

//树节点结构体
typedef struct _Node{
    char data;
    struct _Node *lchild;
    struct _Node *rchild;
}node_t;

//创建树的函数
int create_tree(node_t **root){
    if(NULL == root){
        return -1;
    }
    char value = 0;
    scanf("%c", &value);
    getchar();//清理垃圾字符
    if('#' == value){//递归的出口
        return 0;
    }
    *root = (node_t *)malloc(sizeof(node_t));
    if(NULL == *root){
        return -1;
    }
    (*root)->data = value;
    (*root)->lchild = NULL;
    (*root)->rchild = NULL;
    //创建左子树
    create_tree(&((*root)->lchild));
    //创建右子树
    create_tree(&((*root)->rchild));
    return 0;
}

int destroy_tree(node_t **root){
    if(NULL == root){
        return -1;
    }
    destroy_tree(&((*root)->lchild));
    destroy_tree(&((*root)->rchild));
    free(*root);
    *root = NULL;
    return 0;
}

//前序遍历
int qianxu(node_t *root){
    if(NULL == root){//递归的出口
        return -1;
    }
    printf("%c", root->data);
    qianxu(root->lchild);
    qianxu(root->rchild);
    return 0;
}

//中序遍历
int zhongxu(node_t *root){
    if(NULL == root){//递归的出口
        return -1;
    }
    zhongxu(root->lchild);
    printf("%c", root->data);
    zhongxu(root->rchild);
    return 0;
}

//后序遍历
int houxu(node_t *root){
    if(NULL == root){//递归的出口
        return -1;
    }
    houxu(root->lchild);
    houxu(root->rchild);
    printf("%c", root->data);
    return 0;
}

int main(int argc, const char *argv[])
{
    node_t *root = NULL;
    create_tree(&root);
    
    //前序
    qianxu(root);
    printf("\n");

    //中序
    zhongxu(root);
    printf("\n");

    //后序
    houxu(root);
    printf("\n");

    destroy_tree(root);

    return 0;
}