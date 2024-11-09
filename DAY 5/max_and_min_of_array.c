#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int num[n];
    printf("Enter %d elements of an array:",n);
    for(int i=0;i<n;i++)
        scanf("\t%d",&num[i]);
    printf("The elements of an array are:");
    for(int i=0;i<n;i++)
        printf("\t%d",num[i]);
    int max=num[0];
    int min=num[0];
    for(int i=0; i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
        else if(num[i]<min){
            min=num[i];
        }
    }
    printf("\nMax is:%d",max);
    printf("\nMin is %d",min);
    return 0;
}