//. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>
int main(){
int i, num, sum=0, j;
printf("Enter number where to end series:");
scanf("%d", &num);
for(i=1; i<=num; i++){
    sum+=i*(i+1)/2;
}

printf("The sum of triangular number of %d is :%d", num, sum);










}