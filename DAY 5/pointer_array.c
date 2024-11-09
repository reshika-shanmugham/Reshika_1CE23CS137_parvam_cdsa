#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int *ptr=arr;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<5;i++){
        printf("\t%d",*ptr);
        ptr++;
    }
    printf("\t%d",*(ptr+1));//changes the position of index
    printf("\t%d",*(ptr+2)+*(ptr));
    return 0;
}