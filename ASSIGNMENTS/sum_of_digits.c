#include<stdio.h>
int main(){
    int num,sum=0,reminder=0,i;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0){
        reminder=num%10;
        num=num/10;
        sum=sum+reminder;
    }
    printf("\t%d",sum);
    return 0;
}