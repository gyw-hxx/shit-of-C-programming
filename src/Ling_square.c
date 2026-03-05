#include <stdio.h>
#define N 5
int main(){
    int i, j, k;
    for (i=1; i<=N; i++){ //外层循环 控制层数
        for (j=1; j<=N-i; j++){ 
            printf(" "); //打印空格
         } 
            for (k=1; k<=2*i-1; k++){ //内存循环 打印数字
                printf("*");
            }
            printf("\n");
    }
    for (i=4; i>=1; i--){
        for (j=1; j<=N-i; j++){
            printf(" ");
        }
        for (k=1; k<=2*i-1; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}