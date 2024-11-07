#include<Stdio.h>
int main(){
    int a=7,b=3;
    int valid=1,invalid=!valid;
    if((a>5)&&(b>5))
        printf("A and B are greater than 5");
    else if((a>5)||(b>5))
        printf("A is greater than 5");
    else
        printf("A is not greater than B");
    printf("\n\"Valid\" is:%d",valid);
    printf("\nInvalid is:%d",invalid);
    return 0;
}