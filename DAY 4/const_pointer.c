//address can't be modified, only the value can be modified
#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    int* const ptr=&a;
    //ptr=&a;
    //g--->address of a
    //*g--->value of a
    printf("Value of pointer before modification:%d",*ptr);
    *ptr=45;
    printf("\nThe value of pointer aftr modification is:%d",*ptr);
    return 0;
}