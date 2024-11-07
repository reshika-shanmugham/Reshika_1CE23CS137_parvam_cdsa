#include<stdio.h>
int main(){
    int num;
    int prime,i;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num==0 || num==1)
        printf("Number is neither prime nor not-prime");
    for(i=2;i*i<=num;i++)
        prime=num%i;
    if(prime!=0)
        printf("\nPrime");
    else
        printf("\nNot Prime");
     return 0;
}