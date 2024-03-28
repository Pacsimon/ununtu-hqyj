#include <stdio.h>

void print_arr(int *p, int len){
    for(int i = 0; i < len; i++){
        printf("%d  ", p[i]);
    }
    printf("\n");
}

int swap(int *a,int *b){
    if(NULL == a || NULL == b)   return -1;

    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;

    return 0;
}
//一趟排序的函数
int one_sort(int *p, int low, int high){
    //6, 4, 9, 3, 7, 5, 8, 2, 1, 10
    //选一个比较的基准 一般为了方便写代码 都选 最左边的
    if(low <= high) return -1;

    int flag = p[low];
    while(low < high){
        while(low<high && flag <= p[high])
            high--;
        while(low<high && flag >= p[low])
            low++;
        swap(&p[low],&p[high]);
    }

0}

// int one_sort(int *p, int low, int high){
//     //6, 4, 9, 3, 7, 5, 8, 2, 1, 10
//     //选一个比较的基准 一般为了方便写代码 都选 最左边的
//     int flag = p[0];
//     int temp = 0;
//     int lh_flag = 0;  //0 低  1高
//     while(low != high){
//         if(lh_flag == 0){
//             if(flag > p[high]){
//                 temp = flag;
//                 flag = p[high];
//                 p[high] = temp;
//                 p[low] = flag;
//                 lh_flag = 1;
//                 flag = p[high];
//                 low++;
//             }else{
//                 high--;
//             }
//         }else{
//             if(flag < p[low]){
//                 temp = flag;
//                 flag = p[low];
//                 p[low] = temp;
//                 p[high] = flag;
//                 lh_flag = 0;
//                 flag = p[low];
//                 high--;
//             }else{
//                 low++;
//             }
//         }
//     }
// }


int main(int argc, const char *argv[])
{
    int s[10] = {6, 4, 9, 3, 7, 5, 8, 2, 1, 10};
    //排序前
    print_arr(s, 10);

    //排序的过程
    one_sort(s, 0, 9);

    //排序后
    print_arr(s, 10);

    return 0;
}