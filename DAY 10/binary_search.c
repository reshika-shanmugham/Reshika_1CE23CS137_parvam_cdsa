//possible only for sorted array...time complexity is n/2
#include<stdio.h>
int binary(int arr[],int size,int target){
    int left=0;
    int right=size-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(target>arr[mid]){
             left=mid+1;
        }
        else if(target<arr[mid]){
            right=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    int n,target;
    printf("Enter the number of elements of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:",n);

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The elements of the array are:");
    for(int i=0;i<n;i++)
        printf("\t%d",arr[i]);
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("\nEnter target element:");
    scanf("%d",&target);
    int result=binary(arr,size,target);
    printf("Element found at index %d ",result);
    return 0;
}