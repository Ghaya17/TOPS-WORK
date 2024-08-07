//to find largest of three numbers.
#include<stdio.h>
int main(){
int n1, n2, n3, largest;
printf("Enter your number:");
scanf("%d%d%d",&n1, &n2, &n3);
largest=((n1>n2 && n1>n3) ? n1 :((n2>n1 && n2>n3) ? n2 : n3));
printf("Largest number is %d", largest);



}