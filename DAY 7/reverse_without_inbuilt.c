#include<stdio.h>
#include<String.h>
int main(){
    char str[100];
    printf("Enter the string:");
    scanf("%s",str);
    int st=0;
    int end=strlen(str)-1;
    char temp;
    while(st<end){
        temp=str[st];
        str[st]=str[end];
        str[end]=temp;
        st++;
        end--;
    }
    printf("Reversed :%s",str);
    return 0;
}