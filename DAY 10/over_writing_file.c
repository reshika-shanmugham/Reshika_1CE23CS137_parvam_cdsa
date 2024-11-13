#include<Stdio.h>
int main(){
    FILE *file=fopen("hello.txt","W");
    if (file==NULL){
        perror("Error openeing file");
        return 1;
    }
    fprintf(file,"This is the first line\n");
    fprintf(file,"Writing to file will overwrite it's contents\n");
    fprintf(file,"This is an example of writing contents to a file");
    fclose(file);
    printf("File written successfully in write mode");
    return 0;
}