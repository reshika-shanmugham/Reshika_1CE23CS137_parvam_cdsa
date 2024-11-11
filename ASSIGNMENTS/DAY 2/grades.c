#include<stdio.h>
int main(){
    int grade;
    int ch;
    printf("Enter grade:");
    scanf("\n%d",&grade);
    if(grade>=90)
        ch=1;
    else if(grade>=80 && grade<=89)
        ch=2;
    else if(grade>=70 && grade<=79)
        ch=3;
    else if(grade>=60 && grade<=69)
        ch=4;
    switch(ch){
        case 1:
            printf("A");
            break;
        case 2:
            printf("B");
            break;
        case 3:
            printf("C");
            break;
        case 4:
            printf("D");
            break;
        default:
            printf("F");
    }
    return 0;
}