#include<stdio.h>
int main(){
    int a,b,result;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    result=(a>b)?a:b;
    printf("%d",result);
    return 0;
}