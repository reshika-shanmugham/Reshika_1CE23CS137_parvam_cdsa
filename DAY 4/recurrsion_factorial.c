#include<stdio.h>
int factorial(int n){
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);  
}
int main(){
    int n;
    printf("ENter the value of n:");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("The factorial of %d is %d",n,fact);
    return 0;
}