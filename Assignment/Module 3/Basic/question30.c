//converts days into years and years into days
#include<stdio.h>
int main(){
int days,years;
printf("Enter number of days:");
scanf("%d", &days);
years=days/365;
printf("\ndays into years:%d",years);
printf("\nEnter number of years:");
scanf("%d",&years);
days=years*365;
printf("\nyear into days:%d",days);

}