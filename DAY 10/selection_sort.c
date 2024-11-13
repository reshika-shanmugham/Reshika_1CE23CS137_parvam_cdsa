#include<stdio.h>
int main(){
    int a[]={8,3,1,9,4};
    int n=sizeof(a)/sizeof(a[0]);
    int i,j;
    int minindex;
    int temp;
    printf("Original Array:");
    for(i=0;i<n;i++)
        printf("\t%d",a[i]);
    for(i=0;i<n-1;i++){
        minindex=i;
        for(j=i+1;j<n;j++){//5-0-1
            if(a[j]<a[minindex]){
                minindex=j;
            }
        }
        temp=a[minindex];
        a[minindex]=a[i];
        a[i]=temp;
    }
    printf("\nSorted Array:");
    for(i=0;i<n;i++){
        printf("\t%d",a[i]);
    }
    return 0;
}