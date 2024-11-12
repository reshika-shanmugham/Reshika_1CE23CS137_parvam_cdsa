#include<stdio.h>
int main(){
    int n;
    printf("Entert he number of elements:");
    scanf("%d",&n);
    int* array=(int*)malloc(n*sizeof(int));//typecasting from void* to int*
    if(array==NULL){
        printf("Memory allocation failed");
        return 1;
    }
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
        scanf("\t%d",&array[i]);
    printf("You entered:");
    for(int i=0;i<n;i++)
        printf("\t%d",array[i]);
    printf("\n");
    free(array);
    return 0;
}