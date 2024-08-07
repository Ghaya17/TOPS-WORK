//C Program to Reverse a Number Using FOR Loop Series Program:
#include<stdio.h>
int main(){
int n, rev=0, rem;
printf("Enter number:");
scanf("%d", &n);
int original_num=n;
for(int i=1; i<=10; i++){
       rem=n%10;
       rev=rev*10+rem;
       n/=10;

}


printf("Reverse of given number is %d", rev);













}