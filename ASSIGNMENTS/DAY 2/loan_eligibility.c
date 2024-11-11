#include<stdio.h>
int main(){
    int age;
    int income;
    printf("Enter the age of the applicant:");
    scanf("%d",&age);
    if(age>=18 && age<=60){
        printf("Eligible  if constraints are satisfied");
    }
    else if(age<18){
        printf("NOt eligible");
    }
    printf("\nEnter the monthly income of the applicant:");
    scanf("%d",&income);
    if(age>=18 && age<=25){
        if(income>=5000 && income>=50000)  
            printf("Eligible");
        else
            printf("Not eligible");
    }
    else if(age>=26 && age<=40){
        if(income>=10000 && income>=50000)
            printf("Eligible");
        else
            printf("Not eligible");
    }
    else if(age>=40 && age<=60){
        if(income>=15000 && income<=50000)
            printf("Eligible");
        else
            printf("Not eligible");
    }
    return 0;
}