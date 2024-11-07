#include<stdio.h>
int area(int l,int b){
    int area=l*b;
    return area;
}
int main(){
    int l,b;
    printf("Enter the length:");
    scanf("%d",&l);
    printf("Enter the breadth:");
    scanf("%d",&b);
    int a=area(l,b);
    printf("The area is:%d",a);
    return 0;
}