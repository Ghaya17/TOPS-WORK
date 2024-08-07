//sum of natural numbers.
#include<stdio.h>
int main(){
int n, i=1, sum=0;
printf("Enter number upto which sum is needed.");
scanf("%d", &n);
while(i<=n){
    sum+=i;
    i++;
}
printf("The sum of (1 + 2 + 3 + 4 +5 ......) of %d is %d", n, sum);












}