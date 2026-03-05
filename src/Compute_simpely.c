#include <stdio.h>
#include <string.h>

int main(){
    double a,b;
    char A;
    scanf("%lf %lf",&a,&b);
    while (getchar() != '\n');
    A = getchar();
    switch(A){
        case '+':
            printf("%lf",a+b);
            break;
        case '-':
            printf("%lf",a-b);
            break;
        case '/':
            if(b==0){
                printf("Divisor can't be zero");
                return 1;
            }
            printf("%lf",a/b);
            break;
        case '*':
            printf("%lf",a*b);
            break;
        default:
            printf("error");
            break;
    }
    return 0;
}