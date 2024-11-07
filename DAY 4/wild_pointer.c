//pointer which is not initialized is called a WILD Pointer...it provides a different address when it is executed each time which is not specified
#include<Stdio.h>
int main(){
    int b=50;
    int *ptr;
    int* c;
    c=&b;
    printf("%u",c);
    printf("%d",*c);
    printf("%u",ptr);
    return 0;
}