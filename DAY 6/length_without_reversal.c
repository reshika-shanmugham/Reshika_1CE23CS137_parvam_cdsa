#include<stdio.h>
#include<string.h>
int main(){
    char str[50]="hello";
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    printf("The length of the string %d",length);
    return 0;
}