#include<stdio.h>
#include<math.h>
int main(){
    int pow=0;
    int curr=1;
    while(pow<=7){
        printf("\n%d",curr*=2);
        pow++;
    }
    return 0;
}