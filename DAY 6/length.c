#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;//removes extra value in resultant length...without this we have to use strlen(var)-1
    printf("The length of the string is:%d",strlen(str));//length of the string is strlen(var)


}