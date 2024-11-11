#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        int age;
        char name[90];
        float mk;
    };
    struct person p1;
    struct person *ptr=&p1;
    printf("Enter name:");
    fgets(ptr->name,sizeof(ptr->name),stdin);
    ptr->name[strcspn(ptr->name,"\n")]=0;
    printf("Enter age:");
    scanf("%d",&ptr->age);
    printf("Enter marks:");
    scanf("%f",&ptr->mk);
    printf("The age and marks of %s is %d and %.2f is respectively",ptr->name,ptr->age,ptr->mk);
    return 0;
}