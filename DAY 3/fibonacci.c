#include<stdio.h>
int main(){
    int fib;
    int i,n;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        fib=i+(i-1);
        printf("\t%d",fib);
        i=i+1;
    }
    return 0;
}