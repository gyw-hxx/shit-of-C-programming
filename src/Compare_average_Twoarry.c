#include <stdio.h>
void average(float *p,int n){
    int i;
    float sum = 0;
    for (i=0; i<n; i++)
        sum += p[i];
    printf("平均值为:%f",sum/n);
}
void average2(float (*p)[4],int n){
    int i,j;
    float sum = 0;
    for (i=0; i<n; i++){
        for (j=0; j<4; j++)
        sum += *(*(p+i)+j);
    }
    printf("平均值为:%f",sum/12);
}

int main(){
    float score[3][4] = {{88,77,66,55},
                        {60,67,91,88},
                        {91,77,78,89}};
    average(*score,12);
    return 0;
}
