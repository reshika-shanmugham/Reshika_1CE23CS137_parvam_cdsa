#include<stdio.h>
int main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    int *ptr=&a;
    printf("The value of a is %d",a);
    printf("\nThe address is %p",&a);
    printf("\nThe pointer is %p",ptr);
    printf("\nThe value of pointer is %d",*ptr);
    return 0;
}//%u to print the address of a pointer