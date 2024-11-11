#include<stdio.h>
#include<string.h>
struct add{
    char street[50];
    char city[20];
    char state[20];
};
struct person{
    char name[25];
    int age;
    struct add address;
};
int main(){
    struct person per;
    printf("Enter name:");
    fgets(per.name,sizeof(per.name),stdin);
    per.name[strcspn(per.name,"\n")]=0;
    printf("Enter the city:");
    fgets(per.address.city,sizeof(per.address.city),stdin);
    per.address.city[strcspn(per.address.city,"\n")]=0;
    printf("Enter the street:\n");
    fgets(per.address.street,sizeof(per.address.street),stdin);
    per.address.street[strcspn(per.address.street,"\n")]=0;
    printf("Enter the state:");
    fgets(per.address.state,sizeof(per.address.state),stdin);
    per.address.state[strcspn(per.address.state,"\n")]=0;
    printf("Enter age:");
    scanf("%d",&per.age);
    return 0;
}