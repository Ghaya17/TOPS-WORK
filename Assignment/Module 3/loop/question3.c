//WAP to take 10 no. Input from user find out below values
#include<stdio.h>
int main(){
int num;
int sum_even=0,sum_odd=0;
int count=0;
int even=0; int odd=0;
printf("ENTER NUMBERS:");
while(count<10){
scanf("%d", &num);
if(num%2==0){
 even++;
 sum_even+=num;

}
else{
    odd++;
    sum_odd+=num;
}
count++;
}
printf("\nEven Number = %d ",even);
printf("\nOdd Number = %d ",odd);
printf("\nSum Of Even Number = %d ",sum_even);
printf("\nSum Of Odd Number = %d ",sum_odd);
}