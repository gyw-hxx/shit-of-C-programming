#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student{
    int id;
    char name[50];
    struct student *next;
}stu;

stu *head = NULL;

int main(){
    stu *p,*tail;
    int i,j,id;
    char name[50];
    for (i=0; i<2; i++){
        printf("请输入学号");
        scanf("%d",&id);
        printf("请输入姓名");
        scanf("%s",name);
        p = malloc(sizeof(stu));
        if (p==NULL){
            printf("内存分配错误");
            exit(0);
        }
        p->id = id;
        strcpy(p->name,name);
        p->next = NULL;
        
        if (head == NULL){
            head = p;
            tail = p;
        }else{
            tail->next = p;
            tail = p;
        }
       
    }
     printf("学生信息列表");
        p = head;
        while (p!=NULL){
            printf("学号:%d,学生:%s",p->id,p->name);
            stu *temp = p;
            p = p->next;
            free(temp);
           
        }
    
    return 0;
}