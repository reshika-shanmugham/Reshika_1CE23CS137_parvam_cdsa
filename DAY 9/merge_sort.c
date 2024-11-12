//works on divide and conquer principle
//merges two sorted array
#include<stdio.h>
void mergearray(int arr1[],int m,int arr2[],int n){
    int i=0;
    int j=0;
    int k=0;
    int merge[m+n];

    while(i<m && j<n){
        if(arr1[i]<arr2[j])
            merge[k++]=arr1[i++];
        else    
            merge[k++]=arr2[j++];
    }
    while(i<m){
        merge[k++]=arr1[i++];
    }
    while(j<n){
        merge[k++]=arr2[j++];
    }
    printf("Merged array:");
    for(k=0;k<m+n;k++)
        printf("\t%d",merge[k]);
    printf("\n");
}
int main(){
    int arr1[]={1,3,5,7,10};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={2,4,6,8,11};
    int n=sizeof(arr2)/sizeof(arr2[0]);
    printf("Array 1:");
    for(int i=0;i<m;i++)
        printf("\t%d",arr1[i]);
    printf("\n");
    printf("Array 2:");
    for(int i=0;i<n;i++)
        printf("\t%d",arr2[i]);
    printf("\n");
    mergearray(arr1,m,arr2,n);
    return 0;
}