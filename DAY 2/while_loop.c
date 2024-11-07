#include<stdio.h>
int main(){
    int i=0;
    int n;
    printf("Enter the table of number :");
    scanf("%d",&n);
    while(i<=10){
        printf("\n%d",n*i);
        i++;
    }
    return 0;
}