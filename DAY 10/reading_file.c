#include<Stdio.h>
int main(){
    FILE *file=fopen("exm.C","r");//only reads a file...if file does not exist, gives an error message
    if(file==NULL){
        printf("Error opening file");
        return 1;
    }
    printf("File opened successfully");
    fclose(file);
    return 0;
}