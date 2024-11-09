#include<Stdio.h>
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int num[n];
    printf("Enter %d elements of an array:",n);
    for(int i=0;i<n;i++)
        scanf("%d",&num[i]);
    printf("The elements of an array are:");
    for(int i=0;i<n;i++)
        printf("\t%d",num[i]);
    return 0;
}