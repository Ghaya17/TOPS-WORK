//convert years into days and months
#include<stdio.h>
int main(){
int years,days,month;
printf("Enter number of years:");
scanf("%d", &years);
days=years*365;
printf("\nNumber of days:%d", days);
month=years*12;
printf("\nnumber of months:%d", month);

}