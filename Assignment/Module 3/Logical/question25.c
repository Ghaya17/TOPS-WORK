//Program to put electricity charge and prepare a bill.
#include<stdio.h>
int main(){
int consumedunit, customerid;
float charge1, charge2, charge3, charge4, grossamount, surcharge, totalamount;
printf("Enter customer id:");
scanf("%d", &customerid);
printf("Enter total unit consumed:");
scanf("%d", &consumedunit);
charge1=0.50;
charge2=0.75;
charge3=1.20;
charge4=1.50;

if(consumedunit<=50){
    grossamount=consumedunit*charge1;
    printf("\nTOtal amount paid by customer:%.2f", grossamount);
}

else if (consumedunit>50 && consumedunit<=100){
    grossamount=consumedunit*charge2;
    printf("\nTOtal unit consumed by customer:%.2f", grossamount);
}

else if (consumedunit>100 && consumedunit<=250){
      grossamount=consumedunit*charge3;
    printf("\nTotal unit consumed by customer:%.2f", grossamount);
}

else{
    grossamount=consumedunit*charge4;
    printf("\nTotal unit consumed by customer:%.2f", grossamount);
}



surcharge=grossamount*20/100;
     printf("\nTotal surcharge paid by customer:%.2f", surcharge);

totalamount=grossamount+surcharge;
printf("\nTotal amount paid by customer:%.2f", totalamount);























}