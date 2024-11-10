#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="hippopotamus";
    for(int i=0;a[i]!='\0';i++)
        a[i]=toupper(a[i]);
    printf("The upper cased word is %s",a);
    return 0;
}