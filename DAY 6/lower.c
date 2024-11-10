#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="LOWER";
    for(int i=0;a[i]!='\0';i++)
        a[i]= tolower(a[i]);
    printf("The lower cased string is %s",a);
    return 0;
}