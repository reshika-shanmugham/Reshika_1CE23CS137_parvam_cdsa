#include<stdio.h>
int main(){
    int a=10,b=20;
    int c=a&b;
    printf("The value of c is:%d",c);
    printf("\nSize of C(bytes) is:%d",sizeof(c));
    int d=a++;
    printf("\n+Post-Increment of a is:%d",d);
    int e=++a;
    printf("\nPre-increment of a is:%d",e);
    int f=a++ + ++b;
    printf("\nThe sum of post increment of a and pre increment of b is:%d",f);
    int g=++a + b++;
    printf("\nThe sum of pre increment of a and post increment of b is:%d",g);
    return 0;
}
