#include<Stdio.h>
int main(){
    int n;
    int i;
    int ele;
    int present=0;
    printf("Enter the no.of elements:");
    scanf("%d",&n);
    int num[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("\t%d",&num[i]);
    printf("Enter the element to search:");
    scanf("%d",&ele);
    for(i=0;i<n;i++){
        if(ele==num[i]){
            present=num[i];
        }
    }
    if(present)
        printf("\n%d is PRESENT at %d",ele,i);
    else
        printf("\n%d is ABSENT",ele);
    return 0;
}