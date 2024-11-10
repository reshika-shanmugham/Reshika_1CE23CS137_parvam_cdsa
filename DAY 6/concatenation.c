#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    char str2[50];
    printf("Enter string 1:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    printf("Enter the second string:");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]=0;
    strcat(str,str2);
    printf("%s",str);
}