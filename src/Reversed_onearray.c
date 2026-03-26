#include <stdio.h>
#define N 5
int main() {
int a[N],i,temp,*p;
p = a;
for(i=0; i<5; i++){
    scanf("%d",p+i);
}
for(i=0; i<5/2; i++){
    temp = a[i];
    a[i] = a[4-i];
    a[4-i] = temp;}

for(i=0; i<5; i++){
    printf("%d ",a[i]);
}

return 0;
}