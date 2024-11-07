//referane of a variable value stored  is removed and any random value is stored
#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr=(int*)malloc(sizeof(int));//type-casting 4 bytes of memory
    *ptr=10;
    printf("Before Free %d",*ptr);
    free(ptr);
    printf("\nAfter free %d",*ptr);
    return 0;
}