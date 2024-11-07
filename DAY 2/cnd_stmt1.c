#include<Stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three integers:");
    scanf("%d\t%d\t%d",&a,&b,&c);
    if(a>b && a>c)
        printf("A is greater");
    else if(b>a && b>c)
        printf("B is greater");
    else
        printf("C is greater");
    return 0;
}