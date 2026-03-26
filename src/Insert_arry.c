#include <stdio.h>
#include <string.h>



int main() {
    int a[10] = {1,2,3,5,6},index = 3, pos = 4 ,i;
    for (i=5; i>3; i--){ //
        a[i] = a[i-1];
    }
    a[3] = 4;
    
    for (i=0; i<6; i++){
        printf("%d ",a[i]);
    }
    return 0;
}