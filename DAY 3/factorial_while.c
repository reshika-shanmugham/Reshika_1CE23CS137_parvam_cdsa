#include<stdio.h>
int main(){
    int i=1,n;
    int fact=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=n){
        fact=fact*i;
        i++;
    }
    printf("%d",fact);
    return 0;
}