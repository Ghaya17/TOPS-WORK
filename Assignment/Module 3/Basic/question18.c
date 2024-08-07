//calculate persons annual salary
#include<stdio.h>
int main(){
float annualsalary, monthlysalary, year;
printf("Enter monthly salary:");
scanf("%f",&monthlysalary);
annualsalary=monthlysalary*12;
printf("Person's annual salary:%f", annualsalary);
}