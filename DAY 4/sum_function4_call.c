#include<stdio.h>
int add(){
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    return a+b;
}
int main(){
    int sum=add();
    printf("Sum is:%d",sum);
    return 0;
}
//not accept but return 