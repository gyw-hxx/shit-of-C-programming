#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a[5][4],i,j,sum;
    char great;
    for(i=0; i<5; i++){
        printf("请输入成绩");
        for(j=0; j<4; j++){
            scanf("%d",&a[i][j]);
        }
    }
printf(" NO MT EN PH SUM V >90\n");
printf("-----------------------------------\n");

for(i=0; i<5; i++){
    sum = 0;
    great = 'Y';
    printf("%2d",i+1);
        for(j=0; j<4; j++){
            sum+=a[i][j];
            if(a[i][j] < 90){
                great = 'N';
            }
        }
        printf("%5d",sum);
        printf("%5d",sum/4);
        printf("%5c",great);
        printf("\n");
    }
    return 0;
}