//swap two numbers
#include<stdio.h>
int main(){
int num1, num2;
printf("Enter number 1:");
scanf("%d", &num1);
printf("Enter number 2:");
scanf("%d", &num2);
printf("\nSwapping with two numbers:");
num1=num2;
num2=num1;

printf("\nAfter swapping number 1:%d", num1);
printf("\nAfter swapping number 2:%d", num2);
num1=num1/num2;
num2=num1*num2;

printf("\nAfter swapping two number:%d", num1);
printf("\nAfter swapping two number:%d", num2);

}
