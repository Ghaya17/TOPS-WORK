//Summation of given number.
#include<stdio.h>
int main(){
int num,sum=0,n;
printf("Enter your number:");
scanf("%d", &num);
while(num!=0){
    
    sum+=num%10;
num=num/10;
}

printf("Summation of given number:%d", sum);


}