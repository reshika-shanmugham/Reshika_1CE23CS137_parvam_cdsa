#include<stdio.h>
int main(){
    int num[5];
    int sum=0;//initialisation gives the correct answer
    printf("Enter 5 array elements:");
    scanf("%d",&num);
    for(int i=0;i<5;i++)
        sum=sum+num[i];
    printf("The sum of array is:%d",sum);
    return 0;
}