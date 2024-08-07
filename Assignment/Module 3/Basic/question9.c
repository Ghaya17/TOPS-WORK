//circumference of triangle
#include<stdio.h>
int main(){
    int a,b,c;
int circum;
printf("\nEnter side of triangle:");
scanf("%d %d %d", &a, &b, &c);
circum=a+b+c;
printf("\ncircumference of triangle:%d", circum);
}