#include<stdio.h>
int main(){
    int a=10;
    a +=10;
    printf("The incremented value of a is:%d",a);
    a -=10;
    printf("\nThe decremented value is:%d",a);
    a *=10;
    printf("\nThe multiplied value is:%d",a);
    a /=10;
    printf("\nThe new divided value is:%d",a);
    a %=10;
    printf("\nThe new remainder is:%d",a);
    return 0;
}