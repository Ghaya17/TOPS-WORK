//program to calculate profit or loss on a transaction.
#include<stdio.h>
int main(){
int costprice, sellprice, profit, loss;
printf("Enter cost price:");
scanf("%d", &costprice);
printf("Enter sell price:");
scanf("%d", &sellprice);
profit=sellprice-costprice;
loss=costprice-sellprice;
if(sellprice>costprice){
    printf("You have done profit");
}
else if(costprice>sellprice){
    printf("You have done loss");
}
else{
    printf("No profit- no loss");
}

















}