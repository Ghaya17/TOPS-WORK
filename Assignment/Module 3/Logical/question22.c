//input week number and print week day.
#include<stdio.h>
int main(){
int days;
printf("Enter number of day:");
scanf("%d", &days);
switch(days){

case 1:
printf("Monday");
break;

case 2:
printf("Tuesday");
break;

case 3:
printf("Wednesday");
break;

case 4:
printf("Thursday");
break;

case 5:
printf("Friday");
break;

case 6:
printf("Saturday");
break;

case 7:
printf("Sunday");
break;

default:
printf("Invalid input");
break;



}



}