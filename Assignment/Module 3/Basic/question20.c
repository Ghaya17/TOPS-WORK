//To find out remaining salary
#include<stdio.h>
int main(){
int salary, premium, loaninstallment, remainingsalary;
printf("Enter monthly salary:");
scanf("%d", &salary);
printf("Enter interest of premium:");
scanf("%d", &premium);
printf("Enter loan installment:");
scanf("%d", &loaninstallment);
premium=(salary*10/100);
printf("\nTotal remaining salary after deduct premium:%d", premium);
loaninstallment=(salary*10/100);
printf("\nTotal remaining salary after deduct loaninstallment:%d", loaninstallment);
remainingsalary=salary-premium-loaninstallment;
printf("\nToatal salary remaing:%d", remainingsalary);
}