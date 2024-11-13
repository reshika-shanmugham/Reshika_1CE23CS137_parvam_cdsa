#include<stdio.h>
int main(){
    FILE *file=fopen("reshika.java","w");//write-mode is writing in existing file, if file does not exist then it creates one;w for write moe;r for read mode
    if(file==NULL){
        printf("Error creating file\n");
        return 1;
    }
    printf("File created successfully\n");
    fclose(file);
    return 0;
}
