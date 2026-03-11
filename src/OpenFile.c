#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    int count = 0;
    char s1[50];
    fp = fopen("test.txt","r");
    
    if (fp == NULL){
        printf("文件打开失败");
        exit(1);
    }
    while (fscanf(fp,"%s",s1)!=EOF){
            count++;
    }
    fclose(fp);
    printf("单词总数为%d",count);
    return 0;
}