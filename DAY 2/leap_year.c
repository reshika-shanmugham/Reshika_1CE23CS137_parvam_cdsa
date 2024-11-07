#include<stdio.h>
int main(){
    int yr;
    printf("Enter the year:");
    scanf("%d",&yr);
    if(yr%4==0)
        printf("The year is a leap year.");
    else
        printf("The year is NOT a leap year");
}