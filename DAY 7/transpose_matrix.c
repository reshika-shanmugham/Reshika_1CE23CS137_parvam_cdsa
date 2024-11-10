#include<stdio.h>
int main(){
    int matrix[3][3];
    printf("Enter the elements for 3X3 Matrix:");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The matrix is :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                printf("\t%d",matrix[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of the matrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("\t%d",matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}
