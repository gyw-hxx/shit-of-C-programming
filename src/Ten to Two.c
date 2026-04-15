#include <stdio.h>
int main(){
    int i=0,j,a[20],x=6;
    while(x!=0){
        a[i++] = x%8;
        x = x/8;
    }
    for (j=i-1; j>=0; j--){
        printf("%d ",a[j]);
    }
    return 0;
}