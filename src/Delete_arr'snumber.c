#include <stdio.h>
int main(){
    int a[5] = {1,2,5,4,3};
    int i,k=0;
    for (i=0; i<5; i++){
        if (a[i] != 5){
            a[k++] = a[i];
        }
    
}
  for (i=0; i<k; i++){
        printf("%d ",a[i]);
    }
    return 0;
}