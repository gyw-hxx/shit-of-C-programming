#include <stdio.h>
int main(){
    int a[30],b[6]={0},i,sum=0,j=0;
    for(i=0; i<30; i++){
            a[i] = 2*(i+1);
    }
    for(i=0; i<30; i++){
        sum += a[i];
        if((i+1)%5==0){
            b[j++] = sum / 5;
            sum = 0;
        }
    }
    for(i=0; i<6; i++){
        printf("%d ",b[i]);
    }
    return 0;
}
