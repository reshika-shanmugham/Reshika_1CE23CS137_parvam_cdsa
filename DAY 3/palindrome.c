#include<stdio.h>
int main(){
    int num1,temp;
    int rev=0;
    printf("Enter the sequence number:");
    scanf("%d",&num1);
    temp=num1;
    while(num1!=0){
        int reminder=num1%10;
        rev=rev*10+reminder;
        num1=num1/10;
    }
    if(rev==temp)
        printf("The number is palindrome");
    else
        printf("The number is not palinrome");
    
    return 0;   
}

// 3   32  321    rev
// 12  1   0      num1