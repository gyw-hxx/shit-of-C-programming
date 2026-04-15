#include <stdio.h>
#define N 5
int main(){
    int i,j,temp,a[N]={5,4,3,2,1};
    for (i=1; i<5; i++){
        temp = a[i];
        j = i-1;
    while (j>=0 && a[j] > temp ){
        a[j+1] = a[j];
        j--;
    }
    a[j+1] = temp;
    }
    for (i=0; i<5; i++)
        printf("%d ",a[i]);
    return 0;
}