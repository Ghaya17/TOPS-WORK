//calculate compound interest
#include<stdio.h>
int main(){
    float Compoundinterest,principal,Rate,time, Amount;
    printf("Enter principal amount:");
    scanf("%f", &principal);
    printf("Enter time:");
    scanf("%f", &time);
    printf("Enter rate of interest:");
    scanf("%f", &Rate);
    Amount=principal*(1+Rate/100)*time;
    printf("\nTotal amount:%f", Amount);
    Compoundinterest=Amount-principal;
    printf("\nCompound interest:%f", Compoundinterest);
}