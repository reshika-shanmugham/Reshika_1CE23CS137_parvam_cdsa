#include<stdio.h>
int add(int a,int b){
    int c=a+b;
    return c;
}
int main(){
    int a,b;
    printf("----Addition of two numbers----");
    printf("\nEnter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("The sum is :%d",sum);
    return 0;
}