//check whether triangle is formed.
#include<stdio.h>
int main(){
int angleA, angleB, angleC, Sum;
printf("Enter value of Angle A:");
scanf("%d", &angleA);
printf("Enter value of Angle B:");
scanf("%d", &angleB);
printf("Enter value of Angle C:");
scanf("%d", &angleC);
Sum=angleA+angleB+angleC;
if(Sum==180){
printf("\nThe triangle is formed");
}
else{
    printf("\nThe triangle is not formed");
}

}