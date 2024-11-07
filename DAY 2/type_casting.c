#include<stdio.h>
int main(){
    int a=10;
    float b=a;
    double c=14.03985360;
    int d=(int)c;
    printf("The int value is:%d",a);
    printf("\nThe float value is:%f",b);
    printf("\nThis is explicit conversion of float(larger size) to int(comp. lesser size), given float is %.5f and the conversion results in %d",c,d);
    return 0;
}
