#include <stdio.h>
#include <stdlib.h>
struct Student{
    char cName[20];
    int inumber;
    struct Student *pNext;
};
int iCount;

struct Student* Create(){
    struct Student *pHead = NULL;
    struct Student *pEnd, *pNew;
    iCount = 0;
    pEnd = pNew = (struct Student*)malloc(sizeof(struct Student));
    printf("Enter number:");
    scanf("%s",&pNew -> cName);
    scanf("%d",&pNew -> inumber);
    while(pNew -> inumber !=0){
        iCount++;
        if (iCount == 1){
            pNew -> pNext = NULL; //指向空 表示最后一个节点
            pEnd = pNew;
            pHead = pNew;
        }
        else{
            pNew -> pNext = NULL; //设置新节点为最后一个节点
            pEnd -> pNext = pNew; //尾节点指向新节点 指向下一个
            pEnd = pNew;
        }
    }
}

int main(){

}