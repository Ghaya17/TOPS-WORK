//person insurance premium based on salary
#include<stdio.h>
int main(){
int num;
float salary, monthlypremium, years, grosssalary;
printf("Enter monthly salary:");
scanf("%f", &salary);
grosssalary=salary*12;
printf("\nEnter gross salary:%f", grosssalary);
monthlypremium=(salary*12)*5/100;
printf("\nYour yearly premium: %f",monthlypremium);
}