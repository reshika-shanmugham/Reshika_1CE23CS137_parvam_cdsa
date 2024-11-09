#include<stdio.h>
int main(){
    int num[]={1,2,3,4,5};
    int i;
    for (i = 0; i < 5; i++){
        num[i]=num[i]+5;
        printf("\t%d",num[i]);
    }
    
    return 0; 
}