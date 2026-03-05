#include <stdio.h>
#include <string.h>
int main(){
    float score[3][2];
    float each_stu_avg[3];
    float every_stu_avg;
    float sum = 0.0;
    int i,j,num=1;
    for (i=0; i<3; i++){
        sum = 0.0;
        for (j=0; j<2; j++){
            scanf("%f",&score[i][j]);
            sum += score[i][j];
        }
        each_stu_avg[i] = sum / 2;
    }
     sum = 0.0;
     for (i=0; i<3; i++){
        for (j=0; j<2; j++){
            sum += score[i][j];
        }
    }
     every_stu_avg = sum / 6;
    for (i=0; i<3; i++){
        printf("第%d同学的平均分为%f",num++,each_stu_avg[i]);
    }
        printf("所有同学的平均分为%f",every_stu_avg);
        return 0;
}