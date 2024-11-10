#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="Hello";
    char b[50];
    strcpy(b,a);//parameter 1: dest. parameter 2: src
    printf("The copied string is %s",b);
    printf("\n%d",strlen(b));
    return 0;
}