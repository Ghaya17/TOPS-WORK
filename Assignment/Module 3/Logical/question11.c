//To find number is even or odd using ternary operator.
#include<stdio.h>
int main(){
int num;
printf("Enter number:");
scanf("%d", &num);
(num %2==0) ? printf("%d is even.", num) : printf("%d is odd.", num);


}