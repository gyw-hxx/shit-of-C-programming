#include <stdio.h>
#include <string.h>
typedef struct{
    int iNo;
    char Name[20];
    int score;
}stu;
void input(stu *s){
    scanf("%d",&s->iNo);
    scanf("%s",s->Name);
}
void put(stu *s){
    printf("%d\n",s->iNo);
    printf("%s",s->Name);
}
int main(){
    

    
    return 0;
}

