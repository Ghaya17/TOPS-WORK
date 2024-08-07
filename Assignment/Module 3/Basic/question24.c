//count average and total salary
#include<stdio.h>
int main(){
char name1, name2, name3, name4, name5;
float salary1,salary2, salary3,salary4,salary5, totalsalary, averagesalary;
printf("Enter name1:");
scanf("%c", &name1);
printf("Enter salary:");
scanf("%f", &salary1);
printf("Enter name2:");
scanf("%c", &name2);
printf("\nEnter salary:");
scanf("%f", &salary2);
printf("Enter name3:");
scanf("%c", &name3);
printf("\nEnter salary:");
scanf("%f", &salary3);
printf("Enter name4:");
scanf("%c", &name4);
printf("\nEnter salary:");
scanf("%f", &salary4);
printf("Enter name5:");
scanf("%c", &name5);
printf("\nEnter salary:");
scanf("%f", &salary5);
totalsalary=salary1+salary2+salary3+salary4+salary5;
printf("\n Total salary;%f",totalsalary);
averagesalary=totalsalary/5;
printf("\n Average salary:%f", averagesalary);
}