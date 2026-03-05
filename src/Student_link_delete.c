#include <stdio.h>
#include <stdlib.h>
typedef struct student{
    int stu_id;
    float stu_score;
    struct student *next;
}stu;
stu *head = NULL;

void create(){
    stu *p,*tail;
    int id;
    float score;
    while(1){
        printf("请输入学生的学号(输入-1结束):");
        scanf("%d",&id);
        if(id==-1){
            printf("链表创建完成");
            break;
        }
        printf("请输入该学生的成绩：");
        scanf("%f", &score);
        p = malloc(sizeof(stu));
        if (p==NULL){
            printf("内存分配错误");
            exit(1);
        }
        p->stu_id = id;
        p->stu_score = score;
        p->next = NULL; 

        if(head == NULL){
            head = p; //头指针指向第一个节点
            tail = p; //尾指针也指向第一个节点
        }else{
            tail->next = p; //剩余节点
            tail = p;
        }
    }
}

void deleteNode(){
    if (head == NULL){
        printf("链表为空,无法删除");
        return;
    }
    int del_id;
    printf("请输入你要删除同学的学号:");
    scanf("%d",&del_id);

    stu *p1 = head;
    stu *p2 = NULL;
    while(p1!=NULL && p1->stu_id!=del_id){
        p2 = p1;
        p1 = p1->next;
    }
    if (p1 == NULL){
        printf("没有找到该同学,删除失败");
        return;
    }
    if (p2 == NULL){
        head = head->next;
    }else{
        p2->next = p1->next;
        }
        free(p1);
    printf("学号为%d同学的成绩已被删除",del_id);

}
void printlist(){
     if (head == NULL){
        printf("链表为空");
        return;
}
stu *p = head;
    printf("\n当前链表所有学生信息：\n");
    printf("学号\t成绩\n");
    printf("--------\n");
    while(p!=NULL){
        printf("%d\t%.2f\n",p->stu_id,p->stu_score);
        p = p->next;
    }
}
int main(){
    create();
    printlist();
    deleteNode();
    printlist();
    return 0;
}