#include <stdio.h>
int main(){
    int upper_letters[128] = {0};
    int lower_letters[128] = {0};
    int other_letters[256] = {0};
    int i,j,upper_count=0,lower_count=0,other_count=0;
    char s[50];
    scanf("%s",s);
    for (i=0; s[i]!='\0'; i++){
        if (s[i] >= 'a' && s[i] <= 'z'){
        lower_letters[s[i]]++;
        lower_count++;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
        upper_letters[s[i]]++;
        upper_count++;
        }else{
            other_letters[s[i]]++;
            other_count++;

        }
    }
    for (i=0; i<128; i++){
        if (upper_letters[i]>0){
            printf("大写字母%c出现了%d次\n",i,upper_letters[i]);
        }
        if (lower_letters[i]>0){
            printf("小写字母%c出现了%d次\n",i,lower_letters[i]);
        }
    }
    printf("大写字母一共出现了%d次\n",upper_count);
    printf("小写字母一共出现了%d次\n",lower_count);
    printf("其他字符一共出现了%d次\n",other_count);
    return 0;
}