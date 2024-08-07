//area of rectangle
#include<stdio.h>
int main(){
int l;
int w;
int area;
int circum;
printf("\nEnter length of rectangle:");
scanf("%d", &l);
printf("\nEnter width of rectangle:");
scanf("%d", &w);
area=l*w;
printf("Area of rectangle: %d", area);

//circumference of rectangle
circum=4*area;
printf("\nCircumference of rectangle: %d", circum);

}