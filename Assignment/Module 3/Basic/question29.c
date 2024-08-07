//convert minutes into seconds and hours
#include<stdio.h>
int main(){
int minutes,seconds,hours;
printf("Enter number of minutes:");
scanf("%d", &minutes);
seconds=minutes*60;
printf("\nNumber of seconds:%d", seconds);
hours=minutes/60;
printf("\n number of hours:%d", hours);

}