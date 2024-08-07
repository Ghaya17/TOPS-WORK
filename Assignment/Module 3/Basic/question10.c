//area of rectangular prism
#include<stdio.h>
int main(){
int w, l, h;
int area;
printf("\nEnter width of prism:");
scanf("%d", &w);
printf("\nEnter length of prism:");
scanf("%d", &l);
printf("\nEnter height of prism:");
scanf("%d", &h);
area=2*(w*l+h*l+h*w);
printf("\nArea of rectangular prism:%d", area);
}