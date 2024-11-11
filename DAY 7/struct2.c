#include<stdio.h>
#include<string.h>
int main(){
    struct details{
        char name[70];
        int code;
        char add;
    };
    struct details d1;
    printf("Enter the name:")
    fgets(d1.name,sizeof(d1.name),stdin);
    d1.name[strcspn(d1.name,"\n")]=0;
    printf("Enter the pin-code of the:");
    scanf("%d",&d1.code);
    printf("Enter the address of %s",d1.name);
    fgets(d1.add,sizeof(d1.add),stdin);
    d1.add[strcspn(d1.add,"\n")]=0;
    printf("The pincode and address of %s is %d and %s respectively",d1.name,d1.code,d1.add);
    return 0;
}