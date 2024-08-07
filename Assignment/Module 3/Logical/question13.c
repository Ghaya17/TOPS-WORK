//Find minimumn number among three numbers.
#include<stdio.h>
int main(){
int n1, n2, n3, minimum;
printf("Enter your number:");
scanf("%d%d%d", &n1, &n2, &n3);
minimum=(n1<n2 && n1 <n3)? n1:((n2<n1 && n2<n3)? n2 :n3);
printf("minimum number is %d", minimum);


}