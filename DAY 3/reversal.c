#include<stdio.h>
int main(){
    int num;
    int rev=0;
    printf("Enter the sequence of 3 numbers to reverse:");
    scanf("%d",&num);
    while(num!=0){
        int reminder=num%10;
        rev=rev*10+reminder;
        num=num/10;
    }
    printf("\nThe reversed string is:%d",rev);
    return 0;   
}
// 3   32  321 
// 12  1   0