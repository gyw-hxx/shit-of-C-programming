#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(){
    char num[20];
    scanf("%s",num);
    int i=0,level = 1,len = strlen(num);
    while (i<len){
        if(toupper((unsigned char)num[i]) != toupper((unsigned char)num[len-1])){
            level = 0;
            break;
        }
        i++;
        len--;
    }
    if (level == 1){
        printf("%s是回文数",num);
    }else{
        printf("%s不是是回文数",num);
    }
    return 0;
} 