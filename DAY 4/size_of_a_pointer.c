#include<stdio.h>
int main(){
    int a=10;
    int *poin1=&a;
    char b='g';
    char *poin2=&b;
    float c=9.8876;
    float *poin3=&c;
    printf("Size of Integer Pointer:%d",sizeof(poin1));
    printf("\nSize of character pointer:%d",sizeof(poin2));
    printf("\nSize of float pointer:%d",sizeof(poin3));
    return 0;
}