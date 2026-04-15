#include <stdio.h>
int main(){
    int a[5] = {6,7,8,5,2};
    int i,j,min,temp;
    for (i=0; i<5; i++){
        min = i;
        for (j=i+1; j<5; j++){
            if (a[j] < a[min]) //每一轮找最小元素
                min = j;
           
        }
         if (min!=i){    
                temp = a[i];   //放在当前位置
                a[i] = a[min];
                a[min] = temp;
            }
    }
    for (i=0; i<5; i++){
        printf("%d ",a[i]);
    }
    return 0;
}