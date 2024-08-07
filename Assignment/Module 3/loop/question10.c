//Sum of first and last digit.
#include<stdio.h>
int main(){
int num, firstdigit, lastdigit;
printf("Enter a number:");
scanf("%d", &num);
lastdigit=num % 10;
    // firstdigit=num;
while(num>=10){
     num=num/10;
}
firstdigit=num;
int sum=firstdigit+lastdigit;
printf("Total sum of first and last digit=%d", sum);




}