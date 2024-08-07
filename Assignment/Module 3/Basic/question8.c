//perimeter of rectangle

#include<stdio.h>
int main(){
int l;
int w;
int area;
int perimeter;
printf("\nEnter length of rectangle:");
scanf("%d", &l);
printf("\nEnter width of rectangle:");
scanf("%d", &w);
area=l*w;
printf("Area of rectangle: %d", area);

perimeter=2*l+2*w;
printf("\nperimeter of rectangle: %d", perimeter);

}