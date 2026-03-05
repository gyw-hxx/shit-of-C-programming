#include <stdio.h>
int main(){
    int i,j,k,count = 0;
    char s[100];
    scanf("%s",s);
    for (i=0; s[i]!='\0'; i++){
        for (j=i; s[j]!='\0'; j++){
            count++;
            for (k=i; k<=j; k++){
                printf("%c",s[k]);
           }
           printf("\n");
        }
    }
    int max_length = 0;
    printf("子串总数为:%d",count);
    return 0;
}