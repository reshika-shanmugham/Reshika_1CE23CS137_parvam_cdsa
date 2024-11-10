#include<stdio.h>
int main(){
    char str1[50];
    char str2[50];
    printf("Enter the first string:");
    scanf("%s",str1);
    printf("Enter the second string:");
    scanf("%s",str2);
    printf("%s",str1,"%s",str2);
    int i=0,j=0;
    while(str1[i]!='\0')
        i++;
    while(str2[j]!='\0')
        str1[i++]=str2[j++];
    str1[i]='\0';
    printf("The concatenated string is:\n%s",str1);
    return 0;
}