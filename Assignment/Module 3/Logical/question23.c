//month number and display month name.
#include<stdio.h>
int main(){
int month;
printf("Enter number of month:");
scanf("%d", &month);
switch(month){

case 1:
printf("January");
break;

case 2:
printf("February");
break;

case 3:
printf("March");
break;

case 4:
printf("April");
break;

case 5:
printf("may");
break;

case 6:
printf("june");
break;

case 7:
printf("july");
break;

case 8:
printf("August");
break;

case 9:
printf("september");
break;

case 10:
printf("October");
break;

case 11:
printf("November");
break;

case 12:
printf("December");
break;

default:
printf("Invalid input");
break;



}



}