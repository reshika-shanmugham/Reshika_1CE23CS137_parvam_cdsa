#include<stdio.h>
#include<string.h>
int main(){
    struct Person{
        int age;
        char name[50];
        float marks;
    };
    struct Person p1;
    printf("Enter name:");
    scanf("%s",p1.name);
    printf("Enter age:");
    scanf("%d",&p1.age);
    printf("Enter marks:");
    scanf("%f",&p1.marks);
    printf("The age and marks of %s is %d and %f",p1.name,p1.age,p1.marks);
    return 0;
}