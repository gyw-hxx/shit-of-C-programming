#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student{
    int id;
    char name[50];
    struct student *next;
    struct student *prior;
}stu;

stu *head = NULL;
stu *tail = NULL;

int main(){
    stu *p;
    int i,id;
    char name[50];
    for (i=0; i<2; i++){
        printf("请输入学号：");
        scanf("%d", &id);
        printf("请输入姓名：");
        scanf("%s", name);

        p = malloc(sizeof(stu));
        if (p == NULL){
            printf("内存分配错误");
            exit(1);
        }
        p->id = id;
        strcpy(p->name,name);
        p->prior = NULL;
        p->next = NULL;

        if (head == NULL){
            head = p;
            tail = p;
        }else{
            tail -> next = p;
            p -> prior = tail; //新节点的prior指向尾节点
            tail = p; 
        }
    }
     printf("\n(正向遍历)学生信息列表：\n");
        p = head;
        while (p!=NULL){
            printf("学号为%d 学生姓名为:%s",p->id,p->name);
            p = p->next;
        }
    printf("\n(反向向遍历)学生信息列表：\n");
        p = tail;
        while (p!=NULL){
            printf("学号为%d 学生姓名为:%s",p->id,p->name);
            p = p->prior;
        }
        return 0;
}