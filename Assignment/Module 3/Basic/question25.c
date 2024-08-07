//5 expense from user and find average expense.
#include<stdio.h>
int main(){
float Totalexpense, electricity, gasbill, EMI, schoolfees, Rent, Averageexpense;
printf("Enter Electricity expense:");
scanf("%f", &electricity);
printf("Enter Gasbill expense:");
scanf("%f", &gasbill);
printf("Enter EMI expense:");
scanf("%f", &EMI);
printf("Enter Schoolfees expense:");
scanf("%f", &schoolfees);
printf("Enter Rent expense:");
scanf("%f", &Rent);

Totalexpense=electricity+gasbill+EMI+schoolfees+Rent;
printf("\nTOTAL EXPENSE:%f", Totalexpense);

Averageexpense=Totalexpense/5;

printf("\nAVERAGE EXPENSE:%f", Averageexpense);

}