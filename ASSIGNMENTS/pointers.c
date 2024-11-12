#include<stdio.h>
int main(){
    int a,b,*f,*s;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    f=&a;
    s=&b;
    int sum=*f+*s;
    int dif=*f-*s;
    printf("Sum is %d",sum);
    printf("\nDifference is %d",dif);
    return 0;
}