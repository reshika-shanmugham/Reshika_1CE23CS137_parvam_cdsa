#include<Stdio.h>
int main(){
    int row,col;
    printf("Enter the no.of rows:");
    scanf("%d",&row);
    printf("Enter the no.of columns:");
    scanf("%d",&col);
    int m2[row][col];
    int sum1=0;
    printf("Enter the elements of the matrix:");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    printf("The matrix is:\n");
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("\t%d",m2[i][j]);
        
        }   
        printf("\n");
    }
    printf("\n%d",sum1=sum1+m2[i][j]);
    return 0;
}