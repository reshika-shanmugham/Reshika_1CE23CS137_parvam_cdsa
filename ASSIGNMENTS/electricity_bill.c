#include<stdio.h>
int main(){
    int units;
    int ch;
    int total1,total2,total3;
    printf("Enter the unit consumed:");
    scanf("%d",&units);
    if(units<=100){
        total1=5*units;
        ch=1;
    }
    else if(units>100 && units<=200){
        total2=5*100+(8*(units-100));
        ch=2;
    }
    else if(units>200){
        total3=5*100+8*100+(10*(units-200));
    }
    switch(ch){
        case 1:
            printf("The total bill is %d",total1);
            break;
        case 2:
            printf("The total bill is%d",total2);
            break;
        default:
            printf("The total bill is %d",total3);
    }
    return 0;
}