#include<stdio.h>
int main(){
    int n=15;
    float m=15.0;
    char o='j';
    char p[]="Hello_World";
    printf("\nNumber %d in decimal is %d ",n,n);
    printf("\nNumber %d in octal is %o",n,n);
    printf("\nNumber %d in Hexa-decimal upper case is %X",n,n);
    printf("\nNumber %d in hexa-decimal lower case is %x",n,n);
    printf("\nIn float is %f",m);
    printf("\nIn string format is %s",p);
    printf("\nIn character format is %c",o);
    return 0;
}