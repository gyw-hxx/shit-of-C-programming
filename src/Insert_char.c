#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int Position,i;
    char a[20],x;
    scanf("%s",&a);
    scanf("%d",&Position);
    getchar();
    scanf("%c",&x);
    int len = strlen(a);
     
    if (Position<1 || Position > len + 1 ){
        printf("error");
        return 1;
    }

    for (i=len; i>=Position-1; i--){
        a[i+1] = a[i];
    }
    a[Position] = x;
    a[len+1] = '\0';

    printf("%s",a);
    return 0;
}