#include<stdio.h>
#include<String.h>
int main(){
    char str[100];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    char org[100];
    int st=0;
    int end=strlen(str)-1;
    char temp;
    strcpy(org,str);//must use in-built functions for strings unlike int
    while(st<end){
        temp=str[st];
        str[st]=str[end];
        str[end]=temp;
        st++;
        end--;
    }
    printf("Reversed :%s",str);
    if(strcmp(org,str)==0)//must use in-built functions for strings unlike int
        printf("\nTrue");
    else
        printf("\nFalse");
    return 0;
}