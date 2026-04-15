#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node{
    int id;
    char name[20];
    struct Node *next;
}Node1;
Node1 *head = NULL;


int main(){
    int id,insert_id;
    char name[20];
    char insert_name[20];
    Node1 *p,*tail;
    while(1){
        scanf("%d",&id);
        if(id==-1)
            break;
        scanf("%s",name);
        p = malloc(sizeof(Node1));
        if (p == NULL){
            printf("内存分配错误");
            exit(1);
        }
        p->id = id;
        strcpy(p->name,name);
        p->next = NULL;

        if (head==NULL){
            head = p;
            tail = p;
        }else{
            tail->next = p;
            tail = p;
        }
    }

    Node1 *p1 = head;
    while (p1 != NULL){
        printf("学生的学号为:%d,姓名为%s\n",p1->id,p1->name);
        p1 = p1->next;
    }

    int after_id, new_id;
    char new_name[20];

    printf("请输入要在哪个学号后插入，以及新学号和新姓名:\n");
    scanf("%d %d %s", &after_id, &new_id, new_name);
    Node1 *p3 = head;
    while (p3!=NULL && p3->id!=after_id){
        p3 = p3->next;
    }
    if (p3!=NULL){
        Node1 *S = malloc((sizeof(Node1)));
        if (S == NULL) {
            printf("内存分配错误\n");
            exit(1);
        }
        S->id = new_id;
        strcpy(S->name,new_name);
        S->next = p3->next;
        p3->next = S;
}else {
        printf("没有找到学号为%d的结点，插入失败\n", after_id);
    }

    return 0;
}