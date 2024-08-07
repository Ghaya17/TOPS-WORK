//Accept two number and swap two number
#include<stdio.h>
int main(){
int num1, num2, num3=5;
printf("Enter number 1:");
scanf("%d", &num1);
printf("Enter number 2:");
scanf("%d", &num2);
printf("\n swapping with using 3rd variable:");
num3=num1;
num1=num2;
num2=num3;

printf("\nAfter swapping number 1:%d", num1);
printf("\nAfter swapping number 2:%d", num2);

printf("\n\n swapping without using 3rd variable:\n");
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;

printf("\nAfter swapping number1:%d", num1);
printf("\nAfter swapping number2:%d", num2);

}