#include <stdio.h>
#include <string.h>

int main(){
    char s[20];
    int i=0;
    int count[128]={0};
    scanf("%s",s);
    int len = strlen(s);

    for(i=0; s[i]!='\0'; i++){
        count[s[i]]++;
    }
    for(i=0; i<128; i++){
        if(count[i]>0){
            printf("字符%c出现了%d次",i,count[i]);
            printf("\n");
        }
    }
    return 0;
}