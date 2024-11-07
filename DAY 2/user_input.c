#include<stdio.h>
int main(){
    int a;
    float b;
    char str;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    getchar();
    printf("Enter the value of character:");
    scanf("%c",&str);
    printf("The valur of int, float and character as as follows:\n%d\t%.3f\t%c",a,b,str);
    return 0;
}

