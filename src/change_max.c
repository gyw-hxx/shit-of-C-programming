#include <stdio.h>
#include <stdlib.h>
int main(){
    int num,*arr,i,maxindex=0;
    scanf("%d",&num);
    arr = (int *) malloc(num * sizeof(int));
    if (arr == NULL){
        printf("Error memory");
        exit(1);
    }
    for (i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
     for (i=0; i<num; i++){
        if (arr[i] > arr[maxindex])
            maxindex = i;
    }
    
    int temp = arr[0];
    arr[0] = arr[maxindex];
    arr[maxindex] = temp;
    
    for (i=0; i<num; i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}