//calculate sum of 10 numbers using while loop.
#include<stdio.h>
int main(){
  int num,i=0,sum=0;
  printf("Enter numbers:");
  while(i<10){
    scanf("%d", &num);
    sum+=num;
    i++;
  }
  
  printf("The sum of given number is:%d", sum);
  
  
  
  }