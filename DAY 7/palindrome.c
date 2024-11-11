#include<stdio.h>
#include<String.h>
int main(){
    char str[100];
    printf("Enter the string:");
    scanf("%s",&str);
    char org[100];
    int st=0;
    int end=strlen(str)-1;
    char temp;
    strcpy(org,str);
    while(st<end){
        temp=str[st];
        str[st]=str[end];
        str[end]=temp;
        st++;
        end--;
    }
    printf("Reversed :%s",str);
    if(strcmp(org,str)==0)
        printf("\nIt is palindrome");
    else
        printf("\nIt is not palindrome");
    return 0;
}