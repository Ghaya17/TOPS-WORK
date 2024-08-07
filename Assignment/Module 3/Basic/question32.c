//Accept 2 numbers and find out sum &size
#include<stdio.h>
int main(){
int num1, num2, sum;
printf("Enter number 1:");
scanf("%d", &num1);
printf("Enter number 2:");
scanf("%d", &num2);
sum=num1+num2;
printf("Total sum of two numbers:%d", sum);
printf("\n size of sum is:%d",sizeof(sum));

}