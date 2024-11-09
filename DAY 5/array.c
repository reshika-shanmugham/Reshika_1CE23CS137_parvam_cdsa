#include<stdio.h>
int main(){
    int num[]={1,2,3,4,5};
    for(int i=0;i<=4;i++)
        printf("\t%d",num[i]);
        printf("\n");
    num[4]=7;
    for(int i=0;i<=4;i++)
        printf("\t%d",num[i]);
    return 0;
}