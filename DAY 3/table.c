#include<stdio.h>
int main(){
    int i,n,pro;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<=10;i++){
        pro=i*n;
        printf("\n%d X %d = %d",n,i,pro);
    }
    return 0;
}