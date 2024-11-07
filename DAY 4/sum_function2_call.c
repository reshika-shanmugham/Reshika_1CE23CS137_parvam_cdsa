#include<stdio.h>
void add(int a, int b){
    int c=a+b;
    printf("Sum is:%d",c);
}
int main(){
    int a,b;
    printf("-----ADDITION-----");
    printf("\nEnter the values of a and b:");
    scanf("%d %d",&a,&b);
    add(a,b);
    return 0;
}//accept but don't return