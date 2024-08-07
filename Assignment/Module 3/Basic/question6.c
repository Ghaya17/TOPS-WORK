//Area of triangle
#include<stdio.h>
int main(){
int b;
int h;
int area;
printf("\nEnter height of triangle:");
scanf("%d", &h);
printf("\nEnter bredth of triangle:");
scanf("%d", &b);
area=b*h/2;
printf("Area of triangle:%d", area);
}