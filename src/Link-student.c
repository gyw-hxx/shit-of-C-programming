#include <stdio.h>
#include <stdlib.h>
typedef struct student{
    char name[20];
    int age;
    int id;
    struct student *next;
}stu;
stu *head = NULL;

void create(){
        stu *p,*p1;
        int id;
        while(1){
            printf("请输入学号:");
            scanf("%d",&id);
            p->id = id;
            if( id == 0){
                printf("链表创建完成");
                break;
            }
            p = malloc(sizeof (stu));
            if (p == NULL){
                printf("内存分配失败");
                exit(1);
            }
            printf("请输入学生的姓名和年龄");
            scanf("%s %d",p->name,&p->age);
            p->next = NULL;
            
            if(head = NULL){
                head = p;
            }else{
                p1 = head;
                while(p1->next!=NULL){
                    p1 = p1->next;
                }
                p1->next = p;
            }
        }
}
