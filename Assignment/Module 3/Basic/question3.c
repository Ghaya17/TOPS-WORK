//find area and circumferenece of circel

#include<stdio.h>
int main(){
int r;
const float pi=3.14;
float area;
float circum;
printf("Enter radius of circle:");
scanf("%d", &r);
area=pi*r*r;
printf("\n area of circle: %f", area);
circum=2*pi*r;
printf("\n circumference of circle: %f", circum);
}