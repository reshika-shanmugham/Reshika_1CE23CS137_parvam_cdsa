#include<stdio.h>
int main(){
    int a=90;
    int *ptrr=&a;
    int **p=&ptrr;
    int ***ptr=&p;
    printf("Value of pointer of a:%d",*ptrr);
    printf("\nValue of pointer of pointer:%d",**p);
    printf("\nValue of the pointer of pointer of a pointer:%d",***p);
    return 0;
}