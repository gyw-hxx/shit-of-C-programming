#include <stdio.h>
int main(){
    char str[50],result[128];
    int is_exit[128] = {0};
    int i,j=0;
    scanf("%s",str);
    for (i=0; str[i]!='\0'; i++){
        if (is_exit[(unsigned char)str[i]] == 0){
            is_exit[(unsigned char)str[i]] = 1;
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("%s",result);
    return 0;   
}