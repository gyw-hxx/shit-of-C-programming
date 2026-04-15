#include <stdio.h>
#define N 4
int main(){
    int a[N]={5,4,3,2},i,pos=4,target=1;
    for (i=N; i>pos; i--){
        a[i] = a[i-1];
    }
    a[pos] = target;
    for (i=0; i<N+1; i++){
        printf("%d ",a[i]);
    }
    return 0;
}