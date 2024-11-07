#include<stdio.h>
int main(){
    int a=145;
    int b=145;
    if(a==b)
        printf("A and B are equal");
    else if(a>b)
        printf("A is greater than B");
    else if(a<b)
        printf("A is lesser than B");
    else if(a<=b)
        printf("A is less than or equal to B");
    else if(a>=b)
        printf("A is greated than or equal to B");
    else
        printf("A and B are not equal");
    return 0;
}