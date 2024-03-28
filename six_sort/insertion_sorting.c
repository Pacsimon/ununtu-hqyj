#include <stdio.h>

#define N 12

int insertion_sorting(int *arr,int a){
    int end = 0;
    int temp = 0;

    for(int i=1;i<a;a++){
        end = i-1;
        temp = arr[end+1];
        while(end <= 0){
            if(temp < arr[end]){
                arr[end+1] = arr[end];

            }
        }
    }
}

int main(){
    int num[N] = {5,52,64,24,8,34,15,25,48,75,91,19};

    for(int i=0;i<N;i++){
        printf("%d ",num[i]);
    }
    printf("\n");

    insertion_sorting(num,N);

    for(int i=0;i<N;i++){
        printf("%d ",num[i]);
    }
    printf("\n");

    return 0;
}