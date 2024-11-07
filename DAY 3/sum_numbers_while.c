#include<stdio.h>
int main(){
    int i,n;
    int sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        sum=sum+i;
    printf("%d",sum);
    return 0;
}