#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    char b[50];
    printf("Enter string 1:");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]=0;
    printf("Enter the second string:");
    fgets(b,sizeof(b),stdin);
    b[strcspn(b,"\n")]=0;
    int res=strcmp(b,a);
    printf("\n%d",res);//returns -1 if lesser and 1 if greater
    if(res==0)
        printf("Strings are equal");
    else if(res==-1)
        printf("\nString 1 is lesser than String 2");
    else 
        printf("\nString 2 is greater");
    return 0;
}