#include <stdio.h>

int main(){

    char arr[100] = {0};
    int count[26] = {0};
    int i = 0;
    scanf("%s",arr);
    while(getchar()!='\n');

    while(arr[i] != '\0'){
        switch (arr[i])
        {
            case 'a':
                count[0]++;
                break;
            case 'b':
                count[1]++;
                break;
            case 'c':
                count[2]++;
                break;
            case 'd':
                count[3]++;
                break;
            case 'e':
                count[4]++;
                break;
            case 'f':
                count[4]++;
                break;
            default:
                break;
        }
        i++;
    }
    for (int j = 0; j < 26; j++)
    {
        printf("%c %d")
    }
    
}